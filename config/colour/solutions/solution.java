import java.util.HashSet;
import java.util.Scanner;

public class ColorfulBoxes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        HashSet<Integer> uniqueColors = new HashSet<>();
        
        for (int i = 0; i < N; i++) {
            uniqueColors.add(scanner.nextInt());
        }
        
        System.out.println(uniqueColors.size());
    }
}