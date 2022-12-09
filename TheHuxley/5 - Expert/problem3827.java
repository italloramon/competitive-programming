import java.util.ArrayList;
import java.util.Scanner;

public class HuxleyCode {
    public static void main (String[] agrs){
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int q = (int) Math.sqrt(n);
        int[][] board = new int[q][q];

        for (int i = 0; i < q; i++){
            for (int j = 0; j < q; j++){
                board[i][j] = in.nextInt();
            }
        }

        in.nextLine();
        String s = in.nextLine();
        String[] moves = s.split(" ", 4);

        int t = in.nextInt();

        int x = 0;
        int y = 0;

        for (int i = 0; i < t; i++){
            int m = in.nextInt();
            int d = in.nextInt();
            int mvezes = 0;
            if (moves[d-1].equals("C")){
                while (mvezes < m){
                    if (x-1 >= 0 && board[x-1][y] == 1){
                        x -= 1;
                        mvezes++;
                    } else {
                        break;
                    }
                }
            }
            if (moves[d-1].equals("B")){
                while (mvezes < m){
                    if (x+1 <= q-1 && board[x+1][y] == 1){
                        x += 1;
                        mvezes++;
                    } else {
                        break;
                    }
                }
            }
            if (moves[d-1].equals("D")){
                while (mvezes < m){
                    if (y+1 <= q-1 && board[x][y+1] == 1){
                        y += 1;
                        mvezes++;
                    } else {
                        break;
                    }
                }
            }
            if (moves[d-1].equals("E")){
                while (mvezes < m){
                    if (y-1 >= 0 && board[x][y-1] == 1){
                        y -= 1;
                        mvezes++;
                    } else {
                        break;
                    }
                }
            }
        }
        
        if (x == q-1 && x == y){
            System.out.println("EU PASSEI EM P1");
        } else {
            System.out.println("AINDA TENHO CHANCE NA REAV");
        }
    }

}
