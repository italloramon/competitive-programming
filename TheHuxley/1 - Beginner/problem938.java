import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
		Scanner scanner = new Scanner(System.in);
		int c = 0;
		for(int i = 0; i < 5; i++) {
			System.out.println("Digite um valor:");
			String a = scanner.nextLine();
			if (Double.parseDouble(a) < 0) {
				c++;
			}
		}
		System.out.println("Foram digitados "+c+" numeros negativos");
  }
}
