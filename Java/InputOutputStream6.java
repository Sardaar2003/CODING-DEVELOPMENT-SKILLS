import java.util.*;
import java.io.FileReader;

public class InputOutputStream6 {
    public static void main(String[] args) {
        try {
            FileReader file = new FileReader(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            int i;
            while ((i = file.read()) != -1) {
                System.out.print((char) i);
            }
            file.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
