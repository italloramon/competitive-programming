import java.util.*;
import java.lang.Math;

public class A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long t = in.nextLong();
		for(int i = 0; i < t; i++) {
			
			long n = in.nextLong();
			
			long m = 0;
			for(int j = 0; j < n; j++) {
				long a = in.nextLong();
				m = m + a;
			}
			System.out.println(Math.abs(m));;
		}
	}

}
