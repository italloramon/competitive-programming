import java.util.*;
public class HuxleyCode {
	
	public static boolean isPrime(int n) {
		int c = 0;
		if (n == 0 || n == 1) {
			return false;
		}
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				c++;
			}
		}
		if (c > 0) {
			return false;
		} else {
			return true;
		}
	}
	
	public static int factorial(int n) {
		if (n == 0) {
			return 0;
		}
		
		int f = 1;
		for (int i = n; i > 1; i--) {
			f *= i;
		}
		return f;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int dis = in.nextInt();
		int tam = in.nextInt();
		
		int[] circulo = new int[tam];
		
		int aux = 0;
		int exp = 0;
		int valeMoedas = 0;
		int f = 0;
		for (int i = 0; i < dis; i++) {
			if (aux == tam) {
				aux = 0;
			}
			if (isPrime(aux)) {
				f++;
				System.out.print(aux + " ");
				exp += aux;
			}
		
			if (aux == 7) {
				valeMoedas++;
			}
			circulo[aux]++;
			aux++;
		}
		
		if (f > 0) {
			System.out.println();
		}
		f = 0;
		
		int moedas = factorial(valeMoedas);
		System.out.println("Experiencia = " + exp + " Moedas = " + moedas);
		
		if (moedas == 0) {
			System.out.println("Ja que nao achei moedas, vou na Torre");
			int andar = 1;
			while (exp > 0) {
				andar++;
				exp--;
				if (andar % 7 == 0) {
					moedas += 30;
					System.out.print(andar + " ");
					f++;
				}
			}
			
			if (f > 0) {
				System.out.println();
			}
			
			
			if (moedas == 0) {
				System.out.println("Desisto.");
			} else {
				System.out.println("Consegui " + moedas + " moedas na Torre");
			}
		}	
	}	
}

