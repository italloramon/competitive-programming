import java.util.*;

public class HuxleyCode {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                if (j != i){
                    System.out.print(j + " ");
                } else {
                    System.out.println(j);
                }
                
            }
        }
    }
}
