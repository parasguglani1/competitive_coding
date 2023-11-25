import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int k = sc.nextInt();
        int n = str.length();
        String sub = str.substring(0, k);
        String sub2 = str.substring(k, n);
        System.out.println(sub2 + sub);
    }
}
