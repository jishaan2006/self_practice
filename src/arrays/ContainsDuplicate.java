package arrays;
import java.util.*;
public class ContainsDuplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        ContainsDuplicateSolution sol = new ContainsDuplicateSolution();
        boolean res = sol.containsDuplicate(nums);
    }
}

class ContainsDuplicateSolution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set=new HashSet<>();
        for(int x:nums){
            if(set.contains(x)){
                return true;
            }
            set.add(x);
        }
        return false;
    }
}
