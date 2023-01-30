import java.util.*;

public class printElementsonEvenPosition {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }
        System.out.println("The elements at even position : ");
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                System.out.print(array[i] + " ");
            }
        }
        System.out.println();
        System.out.println("The elements at odd position : ");
        for (int i = 0; i < size; i++) {
            if (i % 2 == 1) {
                System.out.print(array[i] + " ");
            }
        }

    }
}
