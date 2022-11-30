import java.util.*;
public class B {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int t = in.nextInt();
		
		HashMap<String, Integer> dic = new HashMap<String, Integer>();
		dic.put("a", 1);
		dic.put("b", 2);
		dic.put("c", 3);
		dic.put("d", 4);
		dic.put("e", 5);
		dic.put("f", 6);
		dic.put("g", 7);
		dic.put("h", 8);
		dic.put("i", 9);
		dic.put("j", 10);
		dic.put("k", 11);
		dic.put("l", 12);
		dic.put("m", 13);
		dic.put("n", 14);
		dic.put("o", 15);
		dic.put("p", 16);
		dic.put("q", 17);
		dic.put("r", 18);
		dic.put("s", 19);
		dic.put("t", 20);
		dic.put("u", 21);
		dic.put("v", 22);
		dic.put("w", 23);
		dic.put("x", 24);
		dic.put("y", 25);
		dic.put("z", 26);
		
		for (int i = 0; i < t; i++) {
			int len = in.nextInt();
			in.nextLine();
			String s = in.nextLine();
			
			String max = "a";
			for (int j = 0; j < len; j++) {
				String temp = Character.toString(s.charAt(j));
				if (temp.compareTo(max) > 0) {
					max = temp;
				}
			}
			
			for(Map.Entry<String, Integer> mapElement: dic.entrySet()) {
				String key = mapElement.getKey();
				
				if (key.equals(max)) {
					System.out.println(mapElement.getValue());
				}
			}
		}

	}

}
