import java.io.*;
import java.util.*;

public class HuxleyCode {
  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    double a = scanner.nextDouble();
    double b = scanner.nextDouble();
    double c = scanner.nextDouble();
    double m = (a+b+c)/3;
    int cnt = 0;
    if(a>m){
        cnt++;
    }
    if(b>m){
        cnt++;
    }
    if(c>m){
        cnt++;
    }
    System.out.println(cnt);
  }
}
