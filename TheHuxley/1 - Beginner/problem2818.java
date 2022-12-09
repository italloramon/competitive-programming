import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		System.out.println("Digite o pH da solucao:");
		double ph = scanner.nextDouble();
		if(ph >= 0 && ph <= 14) {
			if(ph < 7) {
				System.out.println("Solucao acida");
			} else if (ph > 7){
				System.out.println("Solucao basica");
			} else {
				System.out.println("Solucao neutra");
			}
		} else {
			System.out.println("Valor do pH deve estar entre 0 e 14");
		}
    }
}
