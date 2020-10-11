import java.util. * ;

public class Main {
  public static final Scanner sc = new Scanner(System. in );
  public static void main(String[] args) {
    int n = readInt();
    Map < String,
    String > M = new HashMap < >();
    M.put("purple", "Power");
    M.put("green", "Time");
    M.put("blue", "Space");
    M.put("orange", "Soul");
    M.put("red", "Reality");
    M.put("yellow", "Mind");

    for (int i = 0; i < n; i++) {
      String s = sc.nextLine();
      M.remove(s);
    }
    System.out.println(6 - n);
    for (Map.Entry elem: M.entrySet()) {
      System.out.println(elem.getValue());
    }

    sc.close();
  }

  public static int readInt() {
    int n = sc.nextInt();
    sc.nextLine();
    return n;
  }

}
