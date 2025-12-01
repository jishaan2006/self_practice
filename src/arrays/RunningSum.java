package arrays;

import java.util.*;

public class RunningSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        RunningSumSolution sol = new RunningSumSolution();
        int[] ans = sol.runningSum(nums);
    }
}

class RunningSumSolution {
    public int[] runningSum(int[] nums) {
        int n= nums.length;
        int[] ans=new int[n];
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            ans[i]=nums[i]+ans[i-1];
        }
        return ans;
    }
}
