import java.util.*;
public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (true){
		    int h1 = in.nextInt();
            int m1 = in.nextInt();
            int h2 = in.nextInt();
            int m2 = in.nextInt();
            
            if (h1 == 0 && h1 == m1 && h1 == h2 && h1 == m2) {
                break;
            }
            
            int totalHr = (h2 - h1) * 60;
            int totalMin = (m2 - m1);
            int total = totalHr + totalMin;
            
            if (total < 0) {
                total += 1440;
            }
            
            System.out.println(total);
		}
	}
}

