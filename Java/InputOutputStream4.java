import java.util.*;
import java.io.FileInputStream;

public class InputOutputStream4 {
    public static void main(String[] args) {
        try {
            FileInputStream file = new FileInputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            int i = 0;
            while ((i = file.read()) != -1) {
                System.out.println((char) i);
            }
            file.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
