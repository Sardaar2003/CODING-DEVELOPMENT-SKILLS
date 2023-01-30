import java.util.*;

public class printLargestandSmallestNumber {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        int minimumElement = 10000000;
        int maximumElement = 0;
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();

        }
        for (int i = 0; i < size; i++) {
            if (array[i] > maximumElement) {
                maximumElement = array[i];
            }
            if (array[i] < minimumElement) {
                minimumElement = array[i];
            }
        }
        System.out.println("Maximum Element : " + maximumElement);
        System.out.println("Minimum Element : " + minimumElement);

    }

}
