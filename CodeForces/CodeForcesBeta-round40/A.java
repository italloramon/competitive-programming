import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String t = in.nextLine();

        int c = 0;
        int i = 0;

        if (s.length() != t.length()) {
            System.out.println("NO");
        }
        else{
            for (int j = s.length()-1; j >= 0; j--) {
                if (t.charAt(j) == s.charAt(i)) {
                    c++;
                }
                i++;
            }
            if (c == s.length()) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } 
    }
}
