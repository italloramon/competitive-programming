import java.util.*;

public class HuxleyCode {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double value = in.nextDouble();
        System.out.printf("A vista com desconto de 10%%: %.2f\n",value*0.9);
        System.out.printf("Valor da parcela em 3x sem juros: %.2f\n", value/3);
        System.out.printf("Comissao do vendedor a vista: %.2f\n", (value*0.9)*0.05);
        System.out.printf("Comissao do vendedor a prazo: %.2f\n", value*0.05);
    }
}
