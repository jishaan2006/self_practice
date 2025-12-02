package arrays;
import java.util.*;
public class PlusOne {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] digits = new int[n];
        for (int i = 0; i < n; i++) digits[i] = sc.nextInt();

        PlusOneSolution sol = new PlusOneSolution();
        int[] result = sol.plusOne(digits);

        for (int x : result) System.out.print(x + " ");
    }
}

class PlusOneSolution {
    public int[] plusOne(int[] digits) {
        int carry=0;
        int n=digits.length;
        for(int i=n-1;i>=0;i++){
            if (digits[i]<9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        int[] newdigits=new int[n+1];
        newdigits[0]=1;
        return newdigits;
    }
}

