import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		boolean run = true;
		while(run) {
			double n = scanner.nextDouble();
			if(n == -1) {
				run = false;
			}
			if(n >= 0 && n < 7) {
				System.out.println("ACIDA");
			} else if(n > 7) {
				System.out.println("BASICA");
			} else if(n == 7) {
				System.out.println("NEUTRA");
			}
		}
		scanner.close();
  }
}
