import java.util.*;

public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        
        ArrayList<Passageiro> passageiros = new ArrayList<Passageiro>();
        
		for (int i = 0; i < 40; i++) {
		    int id = in.nextInt();
		    if (id == -1){
		        break;
		    }
		    in.nextLine();
            String data = in.nextLine();
            String destino = in.nextLine();
            String origem = in.nextLine();
            String horario = in.nextLine();
            int poltrona = in.nextInt();
            int idade = in.nextInt();
            in.nextLine();
            String nome = in.nextLine();
            
            Passageiro passageiro = new Passageiro(id, data, destino, origem, horario, poltrona, idade, nome);
            passageiros.add(passageiro);
		}
    	double t = 0;
    	for (Passageiro p: passageiros) {
    	    t += p.idade;
    	}
    	t = t / passageiros.size();
    	
    	for (Passageiro p: passageiros) {
    	    if (p.idade > t && p.poltrona % 2 == 0) {
    	        System.out.println(p.nome);
    	    }
    	}
	}
	
}

class Passageiro {
    int id;
    String data;
    String destino;
    String origem;
    String horario;
    int poltrona;
    int idade;
    String nome;
    
    public Passageiro(int id, String data, String destino, String origem, String horario, int poltrona, int idade, String nome){
        this.id = id;
        this.data = data;
        this.destino = destino;
        this.origem = origem;
        this.horario = horario;
        this.poltrona = poltrona;
        this.idade = idade;
        this.nome = nome;
    }
    
}


