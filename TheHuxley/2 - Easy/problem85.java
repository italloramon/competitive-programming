import java.util.*;
public class HuxleyCode {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int k = in.nextInt();
		String chute;
		
		for (int i = 0; i < k; i++) {
			int t = in.nextInt();
			
			in.nextLine();
			
			String senha = in.nextLine();
			
			while(true) {
				chute = in.nextLine();
			
				if (chute.charAt(0) == '0') {
					break;
				}
				
				char[] arrChute = chute.toCharArray();
				char[] arrSenha = senha.toCharArray();
				
				if (senha.contains(chute)) {
					System.out.printf("(%d,0)\n", senha.length());
					break;
				}
				
				int e = 0;
				int b = 0;
				
				for (int j = 0; j < senha.length(); j++) {
					if (arrSenha[j] == arrChute[j]) {
						e++;
						arrSenha[j] = '*';
						arrChute[j] = '#';
					}
				}
				
				HashMap<Character,Integer> hashmapSenha = new HashMap<Character,Integer>();
				HashMap<Character,Integer> hashmapChute = new HashMap<Character,Integer>();
				
				for (int j = 0; j < arrSenha.length; j++) {   
		            hashmapSenha.put(arrSenha[j], j);   
		        }
				
				for (int j = 0; j < arrChute.length; j++) {   
		            hashmapChute.put(arrChute[j], j);   
		        }
				
				
				for (Character key : hashmapChute.keySet()) {
				      if(hashmapSenha.containsKey(key)) {
				    	  b++;
				      }
				  }
				
				System.out.printf("(%d,%d)\n", e, b);
				
			}
		}
		
		in.close();
	}

}

