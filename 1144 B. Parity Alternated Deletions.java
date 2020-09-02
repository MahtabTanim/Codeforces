import java.util.Scanner;
import java.util.Arrays;
public class Main {
  public static Scanner scanner = new Scanner(System. in );

  public static void main(String[] args) {
    int a = scanner.nextInt(),
    ev = 0,
    od = 0;
    int[] Even = new int[a];
    int[] Odd = new int[a];
    for (int i = 0; i < a; i++) {
      Even[i] = Integer.MAX_VALUE;
      Odd[i] = Integer.MAX_VALUE;
      int b = scanner.nextInt();
      if (b % 2 == 1) {
        Odd[od++] = b;
      } else {
        Even[ev++] = b;
      }
    }
    Arrays.sort(Even);
    Arrays.sort(Odd);
    int sum = 0;
    if (od > ev) {
      for (int i = 0; i < od - ev - 1; i++)
      sum += Odd[i];
    } else {
      for (int i = 0; i < ev - od - 1; i++)
      sum += Even[i];
    }
    System.out.println(sum);
    scanner.close();
  }

}
