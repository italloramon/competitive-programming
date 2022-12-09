import java.util.*;

public class HuxleyCode {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        String food = in.nextLine();
        String juice = in.nextLine();

        double t = 0.0;
        if (food.compareToIgnoreCase("lasanha") == 0){
            t += 8;
        } else if (food.compareToIgnoreCase("estrogonofe") == 0){
            t += 11;
        }
        if (juice.compareToIgnoreCase("suco") == 0){
            t += 2.5;
        } else if (juice.compareToIgnoreCase("refrigerante") == 0){
            t += 3;
        }

        System.out.println(String.format("%.2f", t));
    }
}
