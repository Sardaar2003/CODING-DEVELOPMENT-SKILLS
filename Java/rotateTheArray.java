import java.util.*;

public class rotateTheArray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }
        int value = input.nextInt();
        value = value % size;
        int newArray[] = new int[value];
        int valuedata[] = new int[size - value];
        for (int i = 0; i < value; i++) {
            newArray[i] = array[i];
        }

        int k = 0;
        for (int i = value; i < size; i++) {
            valuedata[k] = array[i];
            k++;
        }
        for (int i = 0; i < size - value; i++) {
            System.out.print(valuedata[i] + " ");
        }
        for (int i = 0; i < value; i++) {
            System.out.print(newArray[i] + " ");
        }
    }

}
