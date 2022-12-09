import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int d = 0, h = 0, m = 0, s = 0, r;
		d = n / 86400;
		r = n % 86400;
		
		h = r / 3600;
		r = n % 3600;
		
		m = r / 60;
		r = n % 60;
		
		s = r;
		
		
		System.out.println(d);
		System.out.println(h);
		System.out.println(m);
		System.out.println(s);
  }
}
