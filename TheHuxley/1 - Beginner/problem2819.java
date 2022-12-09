import java.util.*;
public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        
        System.out.println("Trabalho aborda Interface Grafica? (0 - Nao 1 - Sim)");
        int ig = in.nextInt();
        System.out.println("Trabalho aborda Inteligencia Artificial? (0 - Nao 1 - Sim)");
        int ia = in.nextInt();
        System.out.println("Trabalho aborda Encapsulamento? (0 - Nao 1 - Sim)");
        int en = in.nextInt();
        System.out.println("Trabalho aborda Indentacao? (0 - Nao 1 - Sim)");
        int ind = in.nextInt();
        System.out.println("Trabalho aborda Structs? (0 - Nao 1 - Sim)");
        int st = in.nextInt();
        
        if ((ig == 1 || ia == 1) && (en == 1 && ind == 1) && (st == 1)) {
            System.out.println("Seu trabalho sera avaliado.");
        } else {
            System.out.println("Seu trabalho nao sera avaliado, nota 0.");
        }
	}
}
