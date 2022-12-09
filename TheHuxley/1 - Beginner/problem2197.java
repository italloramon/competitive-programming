import java.util.*;
public class HuxleyCode {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		HashMap<Integer, Character> dic = new HashMap<Integer, Character>();
		
		int n = in.nextInt();
		for (int i = 0; i < n; i++) {
			int k = in.nextInt();
			Character c = in.next().charAt(0);
			dic.put(k, c);
		}
		
		for (int i = 1; i <= n; i++) {
			System.out.print(dic.get(i));
		}
		System.out.println();
	}

}
