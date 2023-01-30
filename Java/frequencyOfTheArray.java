import java.net.SocketTimeoutException;
import java.util.*;

public class frequencyOfTheArray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int array[] = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = input.nextInt();
        }
        int frequency[] = new int[size];
        int visited = -1;
        for (int i = 0; i < size; i++) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (array[i] == array[j]) {
                    count++;
                    frequency[j] = visited;
                }
            }
            if (frequency[i] != visited) {
                frequency[i] = count;
            }
        }
        for (int i = 0; i < size; i++) {
            if (frequency[i] != visited)
                System.out.println("Element : " + array[i] + " : " + frequency[i]);
        }
    }
}
