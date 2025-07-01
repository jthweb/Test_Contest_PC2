import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        // Calculate n / 4
        BigDecimal decimalValue = BigDecimal.valueOf(n).divide(BigDecimal.valueOf(4), RoundingMode.UP);
        
        // Quantize to one decimal place
        BigDecimal result = decimalValue.setScale(1, RoundingMode.UP);
        
        System.out.println(result);
        scanner.close();
    }
}
