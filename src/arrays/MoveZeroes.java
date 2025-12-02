package arrays;
import java.util.*;
public class MoveZeroes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) nums[i] = sc.nextInt();

        MoveZeroesSolution sol = new MoveZeroesSolution();
        sol.moveZeroes(nums);
    }
}

class MoveZeroesSolution {
    public void moveZeroes(int[] nums) {
        int n= nums.length;
        int pos=0;
        for(int a:nums){
            if(a!=0){
                nums[pos]=a;
                pos++;
            }
        }
        while(pos<n){
            nums[pos]=0;
            pos++;
        }
    }
}

