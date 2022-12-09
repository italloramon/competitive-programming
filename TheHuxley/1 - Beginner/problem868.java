import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		int d = scanner.nextInt();
		scanner.nextLine();
		
		ArrayList<Integer> arr = new ArrayList<Integer>();
		
		while(n > 0) {
			String a = scanner.nextLine();
			char b = a.charAt(a.length()-1);
			int c = b - '0';
			if (c == d) {
				arr.add(Integer.parseInt(a));
			}
			n--;
		}
		
		while (arr.size() < 5) {
			arr.add(-1);
		}
		
		Collections.sort(arr);
		
		for (int i = arr.size()-5; i <= arr.size() - 1; i++) {
			System.out.println(arr.get(i));
		}
		
		scanner.close();
  }
}
