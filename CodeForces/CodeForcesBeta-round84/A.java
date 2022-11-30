import java.util.*;

public class Main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		String[] k = scanner.nextLine().split("");
		int c = 0;
		for (int i = 0; i < k.length; i++) {
			if (k[i].equals("4") || k[i].equals("7")) {
				c++;
			}
		}
		if (c == 4 || c == 7) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}   
}
