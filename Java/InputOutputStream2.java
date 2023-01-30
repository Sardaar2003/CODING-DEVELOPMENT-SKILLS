import java.util.*;
import java.io.FileOutputStream;

public class InputOutputStream2 {
    public static void main(String[] args) {
        try {
            FileOutputStream file = new FileOutputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            String data = "Welcome to Chennai";
            byte array[] = data.getBytes();
            file.write(array);
            file.close();
            System.out.println("Success");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
