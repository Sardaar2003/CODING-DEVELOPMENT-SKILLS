import java.util.*;

public class copyElementFromOneArraytoAnother {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }
        int newArray[] = new int[size];
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }
        for (int item : newArray) {
            System.out.println(item);
        }
    }

}
