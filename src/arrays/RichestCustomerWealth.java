package arrays;

import java.util.*;

public class RichestCustomerWealth {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

        int[][] accounts = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                accounts[i][j] = sc.nextInt();
            }
        }

        RichestCustomerWealthSolution sol = new RichestCustomerWealthSolution();
        int ans = sol.maximumWealth(accounts);
    }
}

class RichestCustomerWealthSolution {
    public int maximumWealth(int[][] accounts) {
        int max=0;
        for(int i=0;i<accounts.length;i++){
            int ans=0;
            for(int j=0;j< accounts[0].length;j++){
                ans+= accounts[i][j];
            }
            if(ans>max){
                max=ans;
            }
        }

        return max;
    }
}
