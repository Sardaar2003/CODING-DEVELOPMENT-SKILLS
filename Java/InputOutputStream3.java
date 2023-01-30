import java.util.*;
import java.io.FileInputStream;

public class InputOutputStream3 {
    public static void main(String[] args) {
        try {
            FileInputStream file = new FileInputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            int i = file.read();
            System.out.println((char) i);
            file.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
