import java.util.*;
public class B {
	
	public static Scanner in = new Scanner(System.in);
	
	public static void solve() {
		int n = in.nextInt();
		in.nextLine();
		String l1 = in.nextLine().replace('G', 'B');
		String l2 = in.nextLine().replace('G', 'B');
		
		if (l1.equals(l2)) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}
	
	public static void main(String[] args) {
		int t = in.nextInt();
		in.nextLine();
		while(t > 0) {
			solve();
			t--;
		}
	}
}

