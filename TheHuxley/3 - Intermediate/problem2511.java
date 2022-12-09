import java.util.*;
import java.io.*;

public class HuxleyCode {
	
	static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() { return Integer.parseInt(next()); }
 
        long nextLong() { return Long.parseLong(next()); }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

	public static void main(String[] args) {
		FastReader in = new FastReader();
		
		ArrayList<String> shop = new ArrayList<String>();
		
		for (int i = 0; i < 5; i++) {
			shop.add(in.nextLine());
		}
		in.nextLine();
		
		int c = 0;
		for (int i = 0; i < 6; i++) {
			String chute = in.nextLine();
			for (String  s: shop) {
				if (s.equals(chute)) {
					c++;
				}
			}
		}
		if (c == 5) {
			System.out.println("Could I be more happy?");
		} else {
			System.out.println("It is all just a moo point");
		}
	}

}
