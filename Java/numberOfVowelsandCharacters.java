import java.util.Scanner;

public class numberOfVowelsandCharacters {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String data = input.nextLine();
        int consonant = 0;
        int vowels = 0;
        for (int i = 0; i < data.length(); i++) {
            if (data.charAt(i) == 'a' || data.charAt(i) == 'e' || data.charAt(i) == 'i' || data.charAt(i) == 'o'
                    || data.charAt(i) == 'u') {
                vowels++;
            } else {
                consonant++;
            }

        }
        System.out.println("The number of consonants : " + consonant);
        System.out.println("The number of vowels : " + vowels);
    }
}
