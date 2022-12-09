import java.util.*;
public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        double n1 = in.nextDouble();
        double n2 = in.nextDouble();
        double n3 = in.nextDouble();
        
        double m = (n1 + n2 + n3) / 3;

        if (m >= 7){
            System.out.println("aprovado");
        } else if (m < 3) {
            System.out.println("reprovado");
        } else {
            System.out.println("prova final");
        }
        
	}
}
