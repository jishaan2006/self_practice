package arrays;
import java.util.*;
public class MajorityElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        MajorityElementSolution sol = new MajorityElementSolution();
        int res = sol.majorityElement(nums);
    }
}

class MajorityElementSolution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int a:nums) map.put(a,map.getOrDefault(a,0)+1);
        for(int a:map.keySet()){
            if (map.get(a)>n/2) return a;
        }
//        int candidate=0;      //Boyer–Moore Algorithm
//        int count=0;
//        for(int i=0;i<n;i++) {
//            if (count == 0) {
//                candidate = nums[i];
//                count = 1;
//            } else if (nums[i] == candidate) {
//                count++;
//            } else {
//                count--;
//            }
//         }
//        return candidate;


        return -1;
    }
}

