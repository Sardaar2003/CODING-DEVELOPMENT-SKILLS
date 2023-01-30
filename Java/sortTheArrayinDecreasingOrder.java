import java.util.*;

public class sortTheArrayinDecreasingOrder {
    public static void reverse(int array[]) {
        for (int i = 0; i < array.length / 2; i++) {
            int temp = array[i];
            array[i] = array[array.length - i - 1];
            array[array.length - i - 1] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }
        Arrays.sort(array);
        System.out.println("The array in the ascending order");
        for (int item : array) {
            System.out.print(item + " ");
        }
        System.out.println();
        reverse(array);
        System.out.println("The array in the descending order");
        for (int item : array) {
            System.out.print(item + " ");
        }
    }

}
