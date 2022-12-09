import java.util.*;

public class HuxleyCode {
    
    public static void buscarMelhorPiorVendedor(Vendedor[] vendedores) {
        Vendedor min = vendedores[0];
        Vendedor max = vendedores[0];
        
        for (Vendedor v: vendedores){
            if (v.vendas < min.vendas){
                min = v;
            }
            if (v.vendas > max.vendas){
                max = v;
            }
        }
        System.out.println("Melhor vendedor: " + max.nome);
        System.out.printf("Vendas: R$ %.2f\n", max.vendas);
        System.out.println("Unidade: " + max.unidade);
        System.out.println("Gerente: " + max.gerente);
        System.out.println();
        
        System.out.println("Pior vendedor: " + min.nome);
        System.out.printf("Vendas: R$ %.2f\n", min.vendas);
        System.out.println("Unidade: " + min.unidade);
        System.out.println("Gerente: " + min.gerente);
        System.out.println();
        
    }
    
    public static void buscarVendedor(Vendedor[] vendedores, int n, String vendedorBuscar){
        for (int i = 0; i < n; i++){
            if (vendedores[i].nome.equals(vendedorBuscar)){
                System.out.println("Nome: " + vendedores[i].nome);
                System.out.printf("Vendas: R$ %.2f\n", vendedores[i].vendas);
                System.out.println("Unidade: " + vendedores[i].unidade);
                System.out.println("Gerente: " + vendedores[i].gerente);
                System.out.println();
                break;
            }
            if (i + 1 == n){
                System.out.println("NAO ENCONTRADO");
                System.out.println();
            }
        }   
    }
    
    public static void main(String args[]) {
      Scanner in = new Scanner(System.in);
      
      int n = in.nextInt();
      in.nextLine();
      Vendedor[] vendedores = new Vendedor[n];
      
      for (int i = 0; i < n; i++){
          String nome = in.nextLine();
          double vendas = in.nextDouble();
          int unidade = in.nextInt();
          in.nextLine();
          String gerente = in.nextLine();
          Vendedor vendedor = new Vendedor(nome, vendas, unidade, gerente);
          vendedores[i] = vendedor;
      }
      
      buscarMelhorPiorVendedor(vendedores);
      
      while (true){
          String busca = in.nextLine();
          if (busca.equals("ok")){
              break;
          }
          buscarVendedor(vendedores, n, busca);
      }
      
    }
}

class Vendedor {
    String nome;
    double vendas;
    int unidade;
    String gerente;
    
    public Vendedor(String nome, double vendas, int unidade, String gerente){
        this.nome = nome;
        this.vendas = vendas;
        this.unidade = unidade;
        this.gerente = gerente;
    }
}
