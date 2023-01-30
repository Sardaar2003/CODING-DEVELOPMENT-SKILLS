import java.io.FileOutputStream;
import java.util.*;

public class InputOutputStream {
    public static void main(String[] args) {
        try {
            FileOutputStream file = new FileOutputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            file.write(65);
            file.close();
            System.out.println("Success");
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
