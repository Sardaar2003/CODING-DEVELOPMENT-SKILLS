import java.util.*;
import java.io.File;

public class fileHandling9 {
    public static void main(String[] args) {
        try {
            File file = new File("C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS//");
            String list[] = file.list();
            for (String item : list) {
                System.out.println(item);
            }

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
