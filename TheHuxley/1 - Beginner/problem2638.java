import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		System.out.println("Digite o pH da solucao:");
		int ph = scanner.nextInt();
		if(ph >= 0 && ph <= 14) {
			if(ph < 7) {
				System.out.println("Essa solucao e acida.");
			} else if (ph > 7){
				System.out.println("Essa solucao e basica.");
			} else {
				System.out.println("Essa solucao e neutra.");
			}
		} else {
			System.out.println("Valor deve estar entre 0 e 14.");
		}
    }
}
