import java.util.*;
import java.io.FileInputStream;
import java.io.BufferedInputStream;

public class fileHandling11 {
    public static void main(String[] args) {
        try {
            FileInputStream file = new FileInputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            BufferedInputStream bf = new BufferedInputStream(file);
            int i;
            while ((i = bf.read()) != -1) {
                System.out.print((char) i);
            }
            bf.close();
            file.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
