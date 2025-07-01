import java.util.Scanner;

public class TaxEvasionDetection {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        String[] results = new String[T];

        for (int i = 0; i < T; i++) {
            int reported = scanner.nextInt();
            int actual = scanner.nextInt();
            if (reported < 0.8 * actual) {
                results[i] = "Evasion";
            } else {
                results[i] = "No Evasion";
            }
        }

        // Print results
        for (String result : results) {
            System.out.println(result);
        }
        scanner.close();
    }
}
