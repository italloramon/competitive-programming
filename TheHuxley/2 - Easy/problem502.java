import java.io.*;
import java.util.*;

public class HuxleyCode {
 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int am = 0; 
        int fm = 0;
        int tvRegular = 0;
        int tvNobre = 0;
        int revista = 0; 
        int out = 0;

        for (int i = 0; i < 7; i++) {
            String midia = in.nextLine();
            if (midia.equals("R�dio")){
                String tipoRadio = in.nextLine();
                if (tipoRadio.equals("FM")){
                    fm++;
                } else {
                    am++;
                }
            }
            if (midia.equals("TV")){
                int tipoTv = in.nextInt();
                if (tipoTv > 20){
                    tvNobre++;
                } else {
                    tvRegular++;
                }
                in.nextLine();
            }
            if (midia.equals("Revista")){
                revista++;
            }    
            if (midia.equals("Outdoor")){
                out++;
            }
        }
        double t = 0;
        t = t + (fm * 500) + (am * 300) + (tvRegular * 1200) + (tvNobre * 2000) + (revista * 750) + (out * 1500);
        System.out.printf("%.2f\n", t);
    }
}
