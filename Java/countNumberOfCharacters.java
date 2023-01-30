import java.util.*;

public class countNumberOfCharacters {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String data = input.nextLine();
        char arrayData[] = data.toCharArray();
        int count = 0;
        for (int i = 0; i < arrayData.length; i++) {
            System.out.print(arrayData[i]);

        }
        // System.out.println("The number of characters : " + count);
    }
}
