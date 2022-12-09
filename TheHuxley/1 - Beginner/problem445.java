import java.util.*;
public class HuxleyCode {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int days = in.nextInt();
		int km = in.nextInt();
		
		int totalKm = days * 100;
		
		double totalPrice = days * 90;
		
		if (km > totalKm) {
			totalPrice += (km - totalKm) * 12;
		}
		
		System.out.println(String.format("%.2f", totalPrice));
	}

}
