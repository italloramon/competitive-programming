import java.util.*;
 
public class Main {
 
    public static Scanner in = new Scanner(System.in);
 
    public static void solve(){
        ArrayList<Long> arr = new ArrayList<Long>();
        int cnt = 0;
        int t = in.nextInt();
 
        for (int i = 0; i < t; i++) {
            long n = in.nextLong();
            arr.add(n);    
        }
        int len = arr.size();
        int startPoint = 0;
        int endPoint = 0;
        long fix = arr.get(startPoint);
 
        for (int i = 1; i < len; i++){
            
            if (fix != arr.get(i) && i != endPoint){
                endPoint = i - 1;
 
                if ((startPoint == 0 || arr.get(startPoint - 1) > arr.get(startPoint)) && (endPoint == len - 1 || arr.get(endPoint) < arr.get(endPoint + 1))){
                    cnt++;
                } 
                startPoint = i;
                fix = arr.get(startPoint);
            }
            
        }
      
        endPoint += len-1 - endPoint;
 
        if ((startPoint == 0 || arr.get(startPoint - 1) > arr.get(startPoint)) && (endPoint == len - 1 || arr.get(endPoint) < arr.get(endPoint + 1))){
            cnt++;
        } 
 
        if (cnt == 1){
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
    public static void main(String[] args){
        int t = in.nextInt();
 
        while(t > 0){
            solve();
            t--;
        }
    }
}