import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		if (n % 4 == 0 && n % 7 == 0 && n % 5 != 0) {
			System.out.println("sim");
		}else {
			System.out.println("nao");
		}
  }
}
