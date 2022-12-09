import java.util.ArrayList;
import java.util.Scanner;

public class HuxleyCode {
    public static void main (String[] agrs){
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        in.nextLine();

        ArrayList<String> chandler = new ArrayList<String>();
        ArrayList<String> phoebe = new ArrayList<String>();
        ArrayList<String> joey = new ArrayList<String>();
        ArrayList<String> monica = new ArrayList<String>();
        ArrayList<String> ross = new ArrayList<String>();
        ArrayList<String> clients = new ArrayList<String>();

        for (int i = 0; i < n; i++){
            String s = in.nextLine();
            
            String[] f = s.split(" ", 2);
            
            if (f[1].equals("Cafe")){
                chandler.add(f[0]);
            } else if (f[1].equals("Cha")){
                phoebe.add(f[0]);
            } else if (f[1].equals("Cerveja")){
                joey.add(f[0]);
            } else if (f[1].equals("Refrigerante")){
                monica.add(f[0]);
            } else if (f[1].equals("Suco")){
                ross.add(f[0]);
            } else {
                clients.add(f[0]);
            }
        }

        if (chandler.isEmpty() && phoebe.isEmpty() && joey.isEmpty() && monica.isEmpty() && ross.isEmpty()){
            System.out.println("Nenhum dos meus amigos veio, n�o vou trabalhar hoje.");
        } else {
            if (!chandler.isEmpty()){
                System.out.println("Chandler:");
                for (String food: chandler){
                    System.out.println("-"+food);
                }
                System.out.print("\n");
            } else {
                System.out.print("Chandler n�o pediu nada.\n");
                System.out.println();
            }
            
            if (!phoebe.isEmpty()){
                System.out.println("Phoebe:");
                for (String food: phoebe){
                    System.out.println("-"+food);
                }
                System.out.print("\n");
            } else {
                System.out.print("Phoebe n�o pediu nada.\n");
                System.out.println();
            }
            
            if (!joey.isEmpty()){
                System.out.println("Joey:");
                for (String food: joey){
                    System.out.println("-"+food);
                }
                System.out.print("\n");
            } else {
                System.out.print("Joey n�o pediu nada.\n");
                System.out.println();
            }
            
            if (!monica.isEmpty()){
                System.out.println("Monica:");
                for (String food: monica){
                    System.out.println("-"+food);
                }
                System.out.print("\n");
            } else {
                System.out.print("Monica n�o pediu nada.\n");
                System.out.println();
            }
            
            if (!ross.isEmpty()){
                System.out.println("Ross:");
                for (String food: ross){
                    System.out.println("-"+food);
                }
                System.out.print("\n");
            } else {
                System.out.print("Ross n�o pediu nada.\n");
                System.out.println();
            }
            
            if (!clients.isEmpty()){
                System.out.println("Outros Clientes:");
                for (String food: clients){
                    System.out.println("-"+food);
                }
            }
        }

    }

}
