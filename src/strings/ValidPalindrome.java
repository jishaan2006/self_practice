package strings;
import java.util.*;

public class ValidPalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        ValidPalindromeSolution sol = new ValidPalindromeSolution();
        boolean ans = sol.isPalindrome(s);
        System.out.println(ans);
    }
}

class ValidPalindromeSolution {
    public boolean isPalindrome(String s) {
        int right= s.length()-1;
        int left=0;
        while(left<right){
            while(left<right && !Character.isLetterOrDigit(s.charAt(left))){
                left++;
            }
            while(left<right && !Character.isLetterOrDigit(s.charAt(right))){
                right--;
            }
            if(Character.toLowerCase(s.charAt(left))!=Character.toLowerCase(s.charAt(right))){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}


