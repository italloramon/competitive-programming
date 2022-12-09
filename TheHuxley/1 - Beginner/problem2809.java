import java.util.*;

public class HuxleyCode {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Digite um numero:");
        System.out.println();
        int n = in.nextInt();

        System.out.println("Algarismo das unidades: " + n % 10);
    }
}
