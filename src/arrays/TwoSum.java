package arrays;

import java.util.*;

public class TwoSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        int target = sc.nextInt();

        TwoSumSolution sol = new TwoSumSolution();
        int[] res = sol.twoSum(nums, target);
    }
}

class TwoSumSolution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int difference=target-nums[i];
            if(map.containsKey(difference)){
                return new int[]{map.get(difference),i};
            }
            map.put(nums[i], i);
        }
        return null;
    }
}


