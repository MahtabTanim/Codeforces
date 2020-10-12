import java.util. * ;
import java.math.BigInteger;

public class Main {
  public static final Scanner sc = new Scanner(System. in );

  public static void main(String[] args) {
    int n = readInt();
    int[] A = new int[n];
    int[] R = new int[n];
    int[] V = new int[n];
    for (int i = 0; i < n; i++)
    A[i] = readInt();
    for (int i = 0; i < n; i++)
    V[i] = readInt();
    for (int i = 0; i < n; i++)
    R[i] = 1000000007;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        int x = 1000000007;
        if (A[j] < A[i]) {
          x = V[i] + V[j];
        }
        R[i] = Math.min(R[i], x);
      }
    }
    int ans = 1000000007;
    for (int i = 2; i < n; i++) {
      for (int j = 0; j < i; j++) {
        int x = 1000000007;
        if (A[i] > A[j]) {
          ans = Math.min(R[j] + V[i], ans);
        }
      }
    }
    if (ans < 1000000007) System.out.println(ans);
    else System.out.println( - 1);
  }

  public static int readInt() {
    int n = sc.nextInt();
    return n;
  }

}
