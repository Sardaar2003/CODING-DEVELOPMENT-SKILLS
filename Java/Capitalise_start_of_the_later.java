import java.util.Scanner;

public class Capitalise_start_of_the_later {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String Slower = s.nextLine();
        char[] ch = Slower.toCharArray();
        // for (int i = 0; i < ch.length; i++) {
        // System.out.println(ch[i]);
        // }
        ch[0] = Character.toUpperCase(ch[0]);
        String emptyStr = " ";
        char empty = emptyStr.charAt(0);
        for (int i = 1; i < Slower.length(); i++) {
            if (ch[i] == empty) {
                ch[i + 1] = Character.toUpperCase(ch[i + 1]);
            }
        }
        for (int i = 0; i < Slower.length(); i++) {
            System.out.print(ch[i]);
        }
    }
}