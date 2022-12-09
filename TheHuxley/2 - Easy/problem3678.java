import java.util.Scanner;

public class HuxleyCode {

	public static double saque(double a, double d) {
		return a / (d * 4); 
	}
	
	public static double manju(double b, double d) {
		return b / (d * 5);
	}
	
	public static double yakitori(double c, double d) {
		return c / (d * 3);
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		double a, b, c, d;
		a = in.nextDouble();
		b = in.nextDouble();
		c = in.nextDouble();
		d = in.nextDouble();
		
		a = (a * 675) / 45;
	
		double totalA, totalB, totalC;
		totalA = saque(a, d);
		totalB = manju(b, d);
		totalC = yakitori(c, d);
	
		
		if ((totalA >= 1) && (totalB >= 1) && (totalC >= 1)) {
			System.out.println("Partiu Festa do Japa!");
		} else if (totalA < 1 && totalB < 1 && totalC < 1) {
			System.out.println("Partiu Festa do Japa...Japacama");
		} else if (totalA < 1 && totalB < 1) {
			System.out.printf("Faltaram %.0f saques e %.0f manjus\n",(d*4-a),(d*5-b));
		} else if (totalA < 1 && totalC < 1) {
			System.out.printf("Faltaram %.0f saques e %.0f yakitoris\n",(d*4-a),(d*3-c));
		} else if (totalB < 1 && totalC < 1) {
			System.out.printf("Faltaram %.0f manjus e %.0f yakitoris\n", (d*5-b),(d*3-c));
		} else if (totalA < 1) {
			System.out.printf("Faltaram %.0f saques\n",(d*4-a));
		} else if (totalB < 1) {
			System.out.printf("Faltaram %.0f manjus\n", (d*5-b));
		} else if (totalC < 1) {
			System.out.printf("Faltaram %.0f yakitoris\n",(d*3-c));
		}
	}
}
