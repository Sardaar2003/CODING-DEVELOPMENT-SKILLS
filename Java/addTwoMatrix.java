import java.util.*;

public class addTwoMatrix {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int matrix[][] = new int[size][size];
        int matrix2[][] = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix[i][j] = input.nextInt();
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix2[i][j] = input.nextInt();
            }
        }
        int sumMatrix[][] = new int[size][size];
        int differnceMatrix[][] = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                sumMatrix[i][j] = matrix[i][j] + matrix2[i][j];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                differnceMatrix[i][j] = matrix[i][j] - matrix2[i][j];
            }
        }
        System.out.println("The sum of two matrix is : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(sumMatrix[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("The difference of two matrix : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(differnceMatrix[i][j] + " ");
            }
            System.out.println();
        }
        boolean flag = true;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] != matrix2[i][j]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true) {
            System.out.println("the two matrix is equal");
        } else {
            System.out.println("The two matrix is not equal");
        }
        System.out.println("The Lower Traingle : Matrix 1 : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i > j) {
                    System.out.print(matrix[i][j] + " ");
                } else {
                    System.out.print(0 + " ");
                }
            }
            System.out.println();
        }
        System.out.println("The Lower Triangle : Matrix 2 : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i > j) {
                    System.out.print(matrix2[i][j] + " ");
                } else {
                    System.out.print(0 + " ");
                }
            }
            System.out.println();
        }
        System.out.println("The Upper Triangle : Matrix 1 : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i < j) {
                    System.out.print(matrix2[i][j] + " ");
                } else {
                    System.out.print(0 + " ");
                }
            }
            System.out.println();
        }
        System.out.println("The Upper Triangle : Matrix 2 : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i < j) {
                    System.out.print(matrix2[i][j] + " ");
                } else {
                    System.out.print(0 + " ");
                }
            }
            System.out.println();
        }
        int countOdd = 0;
        int countEven = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] % 2 == 0) {
                    countEven++;
                } else {
                    countOdd++;
                }

            }

        }
        System.out.println("The frequency of odd and even numbers in the matrix : " + countOdd + " " + countEven);
        countEven = 0;
        countOdd = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix2[i][j] % 2 == 0) {
                    countEven++;
                } else {
                    countOdd++;
                }

            }

        }
        System.out.println("The frequency of odd and even numbers in the matrix : " + countOdd + " " + countEven);
        int product[][] = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    product[i][j] = product[i][j] + (matrix[i][k] * matrix[k][j]);
                }
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                System.out.print(product[i][j] + " ");

            }
            System.out.println();
        }
        System.out.println("Transpose of the given Matrix 1 : ");
        int transpose1[][] = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                transpose1[i][j] = matrix[j][i];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(transpose1[i][j] + " ");
            }
            System.out.println();
        }
        int transpose2[][] = new int[size][size];
        System.out.println("Transpose of the given Matrix 2 : ");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                transpose2[i][j] = matrix2[j][i];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print(transpose2[i][j] + " ");
            }
            System.out.println();
        }
    }
}
