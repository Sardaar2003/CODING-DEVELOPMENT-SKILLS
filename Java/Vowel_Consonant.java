import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Vowel_Consonant {
    public static void main(String[] args) throws Exception {
        char Value;
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the character : ");
        Value = (char) bf.read();
        switch (Value) {
            case 'a': {
                System.out.println("The given character is " + Value + " a Vowel");break;
            }
            case 'e': {
                System.out.println("The given character is " + Value + " a Vowel");break;
            }
            case 'i': {
                System.out.println("The given character is " + Value + " a Vowel");break;
            }
            case 'o': {
                System.out.println("The given character is " + Value + " a Vowel");break;
            }
            case 'u': {
                System.out.println("The given character is " + Value + " a Vowel");break;
            }
            default: {
                System.out.println("The given character is " + Value + " is not a Vowel");break;
            }
        }
    }
    
}
