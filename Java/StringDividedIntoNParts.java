import java.util.*;

public class StringDividedIntoNParts {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String value = input.nextLine();
        int temp = 0;
        int length = value.length();
        int n = input.nextInt();
        int chars = length / n;
        String[] equalStr = new String[n];
        for (int i = 0; i < length; i = i + chars) {
            String data = value.substring(i, i + chars);
            equalStr[temp] = data;
            temp++;
        }
        for (int i = 0; i < equalStr.length; i++) {
            System.out.println(equalStr[i]);
        }
    }
}
