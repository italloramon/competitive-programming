import java.util.*;

public class HuxleyCode
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int e = in.nextInt();
		
		int[] gestos =new int[n];
		
		int s = 0;
		for (int i = 0; i < n; i++){
		    gestos[i] = in.nextInt();
		}
		
		for (int i= 0; i < n; i++){
		    for (int j = i; j < n; j++){
		        if (i != j) {
		            if (gestos[i] + gestos[j] == e){
		            System.out.println("SIM");
		            return;
		            }    
		        }
		    }
		}
		
	    System.out.println("NAO");
		
	}
}
