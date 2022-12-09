import java.util.*;

public class HuxleyCode {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		HashMap<Integer, String> robos = new HashMap<>();
		
		robos.put(0, "rosa rosa verde rosa");
		robos.put(1, "verde rosa verde rosa");
		robos.put(2, "verde verde verde rosa");
		robos.put(3, "rosa verde verde rosa");
		robos.put(4, "rosa rosa rosa verde");
		robos.put(5, "verde rosa rosa verde");
		robos.put(6, "verde verde rosa verde");
		robos.put(7, "rosa verde rosa verde");
		robos.put(8, "verde verde verde verde");
		robos.put(9, "rosa rosa rosa rosa");
		robos.put(10, "rosa rosa verde verde");
		robos.put(11, "verde verde rosa rosa");
		
		int n = in.nextInt();
		System.out.println(robos.get(n));
	}

}
