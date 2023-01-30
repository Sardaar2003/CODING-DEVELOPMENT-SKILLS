import java.util.*;
import java.io.File;

public class fileHandling8 {
    public static void main(String[] args) {
        String path;
        boolean value;
        try {
            File file = new File("textfile.txt");
            file.createNewFile();
            System.out.println(file);
            File file2 = file.getCanonicalFile();
            System.out.println(file2);
            value = file2.exists();
            path = file2.getAbsolutePath();
            System.out.println(value);
            if (value) {
                System.out.println(path + " Exists ? " + value);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
