import java.util.*;

public class HuxleyCode {
	
	public static int fatorar(int n, int p) {
		int cnt = 0;
		
		if (n == 0 || n == 1) {
			return 0;
		}
		
        while (n%2==0)
        {
            n /= 2;
        }
 
        for (int i = 3; i <= Math.sqrt(n); i+= 2)
        {
            while (n%i == 0)
            {
                n /= i;
                if (n % i == 0) {
                	return -1;
                }
                cnt++;
                if (cnt > p) {
                	return -1;
                }
            }
        }
 
        if (n > 2) {
        	cnt++;
        }
            
        return cnt;
    }

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		int k = in.nextInt();
		int p = in.nextInt();
		
		
		int q = 0;
		int flag = 0;
		for (int i = n; i < k; i++) {
			int f = fatorar(i, p);
			
			if (f == p) {
				if (flag == 0) {
					System.out.print(i);
					flag++;
				} else {
					q++;
				}
			}
		}
		if (flag == 0) {
			System.out.println("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
		} else {
			System.out.println(" " + q);
		}
		
	}
}
