import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
		ArrayList<String> nomes = new ArrayList<String>();
		ArrayList<Integer> senhas = new ArrayList<Integer>();
		ArrayList<String> mensalidades = new ArrayList<String>();
		
		for(int i = 0; i < 100; i++) {
			String nome = scanner.nextLine();
			if(nome.equals("SAIR")) {
				break;
			}
			nomes.add(nome);
			int senha = scanner.nextInt();
			senhas.add(senha);
			scanner.nextLine();
			String mensalidade = scanner.nextLine();
			mensalidades.add(mensalidade);
		}
		
		int s;
		int t = nomes.size();
		while(1>0) {
			s = scanner.nextInt();
			if(s == -1) {
				break;
			}
			int flag = 0;
			for(int i = 0; i < t; i++) {
				if(s == senhas.get(i)) {
					flag++;
					if(mensalidades.get(i).equals("P")) {
						System.out.println(nomes.get(i) + ", seja bem-vindo(a)!");
					} else {
						System.out.println("N�o est� esquecendo de algo, "+ nomes.get(i) + "? Procure a recep��o!");
					}
				}
				if(i == t-1 && flag == 0) {
					System.out.println("Seja bem-vindo(a)! Procure a recep��o!");
				}
			}
		}
    }
}
