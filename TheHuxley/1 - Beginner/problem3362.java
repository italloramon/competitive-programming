import java.util.*;

public class HuxleyCode {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();

        for (int i = a; i <= b; i++){
            System.out.println((int)(Math.pow(i, 2)) - (4*i) + 5);
        }
    }
}
