import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Alphabet_Checking {
    public static void main(String[] args) throws Exception {
        char character;
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        character = (char) bf.read();
        if (character >= 97 && character <= 123) {
            System.out.println("The character " + character + " is a Lower Case Alphabet");
        }
        else if (character >= 65 && character <= 96) {
            System.out.println("The character " + character + " is a Upper Case Alphabet");
        }
        else {
            System.out.println("The character "+character+" is a digit");
        }
    }
    
}
