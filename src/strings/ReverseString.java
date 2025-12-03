package strings;
import java.util.*;

public class ReverseString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        ReverseStringSolution sol = new ReverseStringSolution();
        String ans = sol.reverseString(s);
        System.out.println(ans);
    }
}

class ReverseStringSolution {
    public String reverseString(String s){

    StringBuilder str=new StringBuilder(s);
    str.reverse();
    return str.toString();
    }
}

