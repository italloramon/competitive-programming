import java.util.*;
public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        double bmenor = in.nextDouble();
        double bmaior = in.nextDouble();
        double altura = in.nextDouble();
        
        double a = (bmenor + bmaior) * altura / 2;
        
        System.out.printf("%.1f", a);
        
	}
}
