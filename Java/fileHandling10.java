import java.util.*;
import java.io.File;

public class fileHandling10 {
    public static void main(String[] args) {
        try {
            File file = new File("C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS//");
            File list[] = file.listFiles();
            for (File item : list) {
                System.out.println(item.getName() + " Can Write : " + item.canWrite() + " is Hidden : "
                        + item.isHidden() + " Length : " + item.length() + " bytes");

            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
