import java.util.*;

public class HuxleyCode {
	
	public static boolean isPrime(int n) {
		
		if (n == 2) {
			return true;
		}
		
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
	
	public static boolean isSquarePerfect(int n) {
		for (int i = 0; i < n/2; i++) {
			if (i * i == n) {
				return true;
			}
		}
		return false;
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int age1, id1;
		age1 = in.nextInt();
		id1 = in.nextInt();
		in.nextLine();
		String name1 = in.nextLine();
		
		int age2, id2;
		age2 = in.nextInt();
		id2 = in.nextInt();
		in.nextLine();
		String name2 = in.nextLine();
		
		Player player1 = new Player(age1, id1, name1);
		Player player2 = new Player(age2, id2, name2);
		
		int pts1 = 0;
		int pts2 = 0;
		
		if (player1.name.compareTo(player2.name) > 0) {
			pts1+=2;
		} else if (player1.name.compareTo(player2.name) < 0) {
			pts2+=2;
		} else {
			pts1+=2;
			pts2+=2;
		}
		
		if (isPrime(player1.age)) {
			pts1+=4;
		}
		if (isPrime(player2.age)) {
			pts2+=4;
		}
		
		if (isSquarePerfect(player1.id)) {
			pts1 += 3;
		}
		
		if (isSquarePerfect(player2.id)) {
			pts2 += 3;
		}
		
		if (pts1 > pts2) {
			System.out.println(player1.name + " WINS");
		} else if (pts2 > pts1) {
			System.out.println(player2.name + " WINS");
		} else {
			System.out.println("CInCABECAS EMPATADOS");
		}
	
	}

}

class Player {
	int age, id;
	String name;
	
	public Player(int age, int id, String name) {
		this.age = age;
		this.id = id;
		this.name = name;
	}
}
