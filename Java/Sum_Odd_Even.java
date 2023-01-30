import java.util.Scanner;

class Sum_Odd_Even {
    public static void main(String[] args) {
        int sumEven = 0, sumOdd = 0;
        int lengthArrays;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the length of the array : ");
        lengthArrays = input.nextInt();
        int[] arrayElement=new int[lengthArrays];
        System.out.println("Enter the elements for the array :");
        for (int i = 0; i < lengthArrays; i++) {
            arrayElement[i] = input.nextInt();
        }
        for (int element : arrayElement) {
            if (element % 2 == 0) {
                sumEven += element;
            } else {
                sumOdd += element;
            }
        }
        System.out.println("The sum of Even number : " + sumEven);
        System.out.println("The sum of Odd number : "+sumOdd);
    }
}
