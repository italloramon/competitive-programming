import java.util.*;
public class HuxleyCode {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		String vitorias = in.nextLine();
		int c = 0;
		int f = 0;
		for (int i = 0; i < vitorias.length(); i++) {
			if (vitorias.charAt(i) == 'c') {
				c++;
			} else if (vitorias.charAt(i) == 'f') {
				f++;
			}
		}
		
		int fla = 0;
		int cor = 0;
		
		int pedro = in.nextInt();
		if (pedro == 1) {
			fla += 20;
		}
		int yuri = in.nextInt();
		if (yuri == 1) {
			cor += 20;
		}
		int golFla = in.nextInt();
		int golCor = in.nextInt();
		if (golFla > golCor) {
			fla += 15;
		} else {
			cor += 15;
		}
		double mediaFla = in.nextDouble();
		double mediaCor = in.nextDouble();
		if (mediaFla >= 2) {
			fla += 10;
		}
		if (mediaCor >= 2) {
			cor += 10;
		}
		
		if (c > f) {
			System.out.println("Pedro tem mais chances de comer o brownie");
			System.out.println("Pontos:" + (cor+40));
		} else {
			System.out.println("Luiza tem mais chances de comer o brownie");
			System.out.println("Pontos:" + (fla+40));
		}
		
		in.close();
	}
}
