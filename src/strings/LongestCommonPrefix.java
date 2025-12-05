package strings;

import java.util.*;

public class LongestCommonPrefix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine(); // clear newline

        String[] strs = new String[n];
        for (int i = 0; i < n; i++) {
            strs[i] = sc.nextLine();
        }

        LongestCommonPrefixSolution sol = new LongestCommonPrefixSolution();
        String ans = sol.longestCommonPrefix(strs);
        System.out.println(ans);
    }
}

class  LongestCommonPrefixSolution{
    public String longestCommonPrefix(String[] strs) {
        StringBuilder ans=new StringBuilder();
        if(strs==null || strs.length==0){
            return "";
        }

        for(int i=0;i<strs[0].length();i++){
            char c=strs[0].charAt(i);
            for(int j=1;j<strs.length;j++){
                if(i>=strs[j].length() || c!=strs[j].charAt(i)){
                    return ans.toString();
                }
            }
            ans.append(c);
        }
        return ans.toString();
    }
}
