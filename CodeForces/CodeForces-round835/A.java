import java.util.*;
public class A {
	
	public static int max(int a, int b, int c) {
		int max = a;
		if (b > max) {
			max  = b;
		}
		if (c > max) {
			max = c;
		}
		return max;
	}
	
	public static int min(int a, int b, int c) {
		int min = a;
		if (b < min) {
			min  = b;
		}
		if (c < min) {
			min = c;
		}
		return min;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int t = in.nextInt();
		
		for (int i = 0; i < t; i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			int c = in.nextInt();
			
			int max = max(a, b, c);
			int min = min(a, b, c);
			
			if ((a == max || a == min) && (c == max || c == min)) {
				System.out.println(b);
			} else if ((b == max || b == min) && (c == max || c == min)) {
				System.out.println(a);
			} else if ((b == max || b == min) && (a == max || a == min)) {
				System.out.println(c);
			}
		}

	}

}

