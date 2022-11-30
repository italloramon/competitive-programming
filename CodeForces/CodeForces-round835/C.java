import java.util.*;
public class C {
	
	public static Scanner in = new Scanner(System.in);
	
	public static void solve() {
		int x = in.nextInt();
		int[] arr = new int[x];
		int flag = 0;
		
		int max = 0;
		int secondMax = 0;
		
		for (int i = 0; i < arr.length; i++) {
			arr[i] = in.nextInt();
			if (arr[i] > max) {
				int temp = max;
				max = arr[i];
				secondMax = temp;
				//flag = i;
			} else if(arr[i] > secondMax) {
				secondMax = arr[i];
			}
		}
		
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == max) {
				System.out.printf("%d ", arr[i] - secondMax);
			} else {
				System.out.printf("%d ", arr[i] - max);
			}
		}
		System.out.println();
	}
	
	public static void main(String[] args) {
	
		int t = in.nextInt();
		
		for (int i = 0; i < t; i++) {
			solve();
		}

	}

}
