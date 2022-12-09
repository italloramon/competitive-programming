import java.util.Scanner;

public class HuxleyCode {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int m = in.nextInt();
		int a = 0;
		int kidResidente, kidConvidada;
		int totalAdulto = 0;
		int totalKid = 0;
		while (true) {
			a = in.nextInt();
			if (a < 0) {
				break;
			}
			kidResidente = in.nextInt();
			kidConvidada = in.nextInt();
			
			if(kidResidente + kidConvidada + totalKid <= m || a > 0 && kidResidente <= 0) {
				System.out.println("Acesso permitido!");
				totalAdulto += a;
				totalKid += kidResidente + kidConvidada;
			} else {
				if (kidConvidada > 0) {
					System.out.println("Acesso permitido devido a presenca de convidado(s).");
					totalAdulto += a;
					totalKid += kidResidente + kidConvidada;
				} else {
					System.out.println("Capacidade maxima de criancas atingida/excedida.");
					if (totalKid > m) {
						System.out.println("Tem " + (totalKid - m) + " crianca(s) a mais que as " + m + " permitidas.");
					}
				}
			}
			
			System.out.println("Adultos na piscina: " + totalAdulto);
			System.out.println("Criancas na piscina: " + totalKid);
			System.out.println("***");
		}
	}

}
