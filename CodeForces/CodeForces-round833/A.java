import java.util.Scanner;
import java.lang.Math;

public class A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int t = in.nextInt();
		
		for (int i = 0; i < t; i++) {
			int n = in.nextInt();
			
			double resul = Math.ceil(n / 2.0);
			
			System.out.printf("%.0f\n", resul);
		}

	}

}
