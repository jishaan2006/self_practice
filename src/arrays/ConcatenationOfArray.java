package arrays;

import java.util.*;

public class ConcatenationOfArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        ConcatenationOfArraySolution sol = new ConcatenationOfArraySolution();
        int[] ans = sol.getConcatenation(nums);
    }
}

class ConcatenationOfArraySolution {
    public int[] getConcatenation(int[] nums) {
        int n=nums.length;
        int[] ans=new int[n*2];
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
}
