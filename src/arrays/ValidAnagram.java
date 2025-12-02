package arrays;
import java.util.*;
public class ValidAnagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();
        String t = sc.next();

        ValidAnagramSolution sol = new ValidAnagramSolution();
        boolean res = sol.isAnagram(s, t);
    }
}

class ValidAnagramSolution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        HashMap<Character,Integer> map_s=new HashMap<>();
        HashMap<Character,Integer> map_t=new HashMap<>();

        for(char a:s.toCharArray()) map_s.put(a, map_s.getOrDefault(a,0)+1);
        for(char b:t.toCharArray()) map_t.put(b, map_t.getOrDefault(b,0)+1);

        return map_s.equals(map_t);
    }
}




