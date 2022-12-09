package problem3218;

import java.util.*;

public class HuxleyCode {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		long a = in.nextLong();
		long b = in.nextLong();
		
		long sub = a - b;
		String s = "";
		
		while (true) {
			if (sub == 1) {
				s = "1" + s;
				break;
			} else if (sub == 0) {
				s = "0" + s;
				break;
			}
			
			if ((sub % 2) == 1) {
				s = "1" + s;
			} else {
				s = "0" + s;
			}
			
			sub /= 2;
			
		}
		
		long pow = 0;
		ArrayList<Long> pows = new ArrayList<Long>();
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s.charAt(i) == '1') {
				pows.add((long) Math.pow(2, pow));
			}
			pow++;
		}
		
		for (int i = pows.size()-1; i >= 0; i--) {
			if (i != 0) {
				System.out.print(pows.get(i) + " ");
			} else {
				System.out.println(pows.get(i));
			}
		}
	
	}
}
