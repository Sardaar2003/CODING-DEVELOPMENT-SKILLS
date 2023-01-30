import java.sql.Array;
import java.util.Arrays;
import java.util.Scanner;

public class anagrams {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String value = input.nextLine();
        String value2 = input.nextLine();
        value = value.toLowerCase();
        value2 = value2.toLowerCase();
        if (value.length() != value2.length()) {
            System.out.println("The two string can't be a anagram");
        } else {
            char string1[] = value.toCharArray();
            char string2[] = value2.toCharArray();
            Arrays.sort(string1);
            Arrays.sort(string2);
            if (Arrays.equals(string1, string2) == true) {
                System.out.println("The string is an anagram");
            } else {
                System.out.println("They are not an anagram");
            }
        }
    }
}
