package strings;
import java.util.*;
public class FirstUniqueChar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        Solution sol = new Solution();
        int ans = sol.firstUniqueChar(s);
        System.out.println(ans);
    }
}

class Solution {
    public int firstUniqueChar(String s) {
        HashMap<Character,Integer> map=new HashMap<>();
        for(char a:s.toCharArray()){
            map.put(a,map.getOrDefault(a,0)+1);
        }
        for(int i=0;i<s.length();i++){
            if(map.get(s.charAt(i))==1){
                return i;
            }
        }
        return -1;
    }
}
