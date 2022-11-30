import java.util.*;

public class A {
	public static Scanner in = new Scanner(System.in);
	
	public static void solve() {
		int w = in.nextInt();
		int h = in.nextInt();
		int n = in.nextInt();
		int cnt = 1;
		
		while (w % 2 == 0) {
			w /= 2;
			cnt *= 2;
		}
		
		while (h % 2 == 0) {
			h /= 2;
			cnt *= 2;
		}
		
		if (cnt >= n) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
		
	}
	
	public static void main(String[] args) {
		int t = in.nextInt();
		for (int i = 0; i <  t; i++) {
			solve();
		}
	}
}
