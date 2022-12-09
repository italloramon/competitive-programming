import java.util.*;

public class HuxleyCode {
	
	public static String[] fracaoPartes(String s) {
		String[] partesFinal = new String[3];
		String [] partes = new String[2]; 
		String [] partes2 = new String[2];
		
		partes = s.split("\\*");
		partes2 = partes[1].split("\\^");
		
		partesFinal[0] = partes[0];
		partesFinal[1] = partes2[0];
		partesFinal[2] = partes2[1];
		
		return partesFinal;
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		String s = in.nextLine();
		
		s = s.replace("(", "");
		s = s.replace(")", "");
		s = s.replace(" ", "");
		
		String[] nums = s.split(",");;
		
		ArrayList<Integer> pontos = new ArrayList<Integer>();
		
		for (String i: nums) {
			pontos.add(Integer.valueOf(i));
		}
		
		String fracao = in.nextLine();
		
		fracao = fracao.replace(" ", "");
		String[] fras = fracao.split("-");
		
		String[] parte1 = fracaoPartes(fras[0]);
		String[] parte2 = fracaoPartes(fras[1]);
	    
		
		double resul1 = Double.parseDouble(parte1[0]) * Math.pow(Double.valueOf(pontos.get(0)), Double.parseDouble(parte1[2]));
		double resul2 = Double.parseDouble(parte2[0]) * Math.pow(Double.valueOf(pontos.get(1)), Double.parseDouble(parte2[2]));
		
		double resul = resul1 - resul2;
		
		
		if (resul != 0) {
			System.out.printf("a fun��o est� definida em (%d,%d)", pontos.get(0), pontos.get(1));
		} else {
			System.out.printf("a fun��o n�o est� definida em (%d,%d) .-.", pontos.get(0), pontos.get(1));
		}
	}
}
