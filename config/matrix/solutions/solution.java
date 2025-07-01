import java.util.Scanner;

public class MatrixSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int M = scanner.nextInt();
        int N = scanner.nextInt();
        
        int[][] A = new int[M][N];
        int[][] B = new int[M][N];
        int[][] result = new int[M][N];
        
        // Read matrix A
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                A[i][j] = scanner.nextInt();
            }
        }
        
        // Read matrix B
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                B[i][j] = scanner.nextInt();
            }
        }
        
        // Calculate the sum of matrices
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }
        
        // Print the resulting matrix
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}