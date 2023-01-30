import java.util.Scanner;

class Matrix_Operations {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int rows = input.nextInt();
        int columns = input.nextInt();
        int arrayData[][] = new int[rows][columns];
        int arrayData2[][] = new int[rows][columns];
        int sumArray[][] = new int[rows][columns];
        int substractionArray[][] = new int[rows][columns];
        int multiplicationArray[][] = new int[rows][columns];
        int transposeArray[][] = new int[rows][columns];
        int transposeArray2[][] = new int[rows][columns];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                arrayData[i][j] = input.nextInt();
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                arrayData2[i][j] = input.nextInt();
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                sumArray[i][j] = arrayData[i][j] + arrayData2[i][j];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                substractionArray[i][j] = arrayData[i][j] - arrayData2[i][j];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                transposeArray[i][j] = arrayData[j][i];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                transposeArray2[i][j] = arrayData2[j][i];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                multiplicationArray[i][j] = 0;
                for (int k = 0; k < rows; k++) {

                    multiplicationArray[i][j] += arrayData[i][k] * arrayData2[k][j];
                }
            }
        }
        System.out.println("Addition : ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(sumArray[i][j] + " ");

            }
            System.out.println();
        }
        System.out.println("Substraction : ");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(substractionArray[i][j] + " ");

            }
            System.out.println();
        }
        System.out.println("Multiplication : ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(multiplicationArray[i][j] + " ");

            }
            System.out.println();
        }
        System.out.println("Transpose Array : ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(transposeArray[i][j] + " ");

            }
            System.out.println();
        }
        System.out.println("Transpose Array 2 : ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(transposeArray2[i][j] + " ");

            }
            System.out.println();
        }

    }
    
}
