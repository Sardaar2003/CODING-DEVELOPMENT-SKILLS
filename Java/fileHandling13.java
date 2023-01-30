import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.util.*;
import java.io.*;

public class fileHandling13 {
    public static void main(String[] args) throws Exception {
        InputStream file = new FileInputStream(
                "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
        DataInputStream dt = new DataInputStream(file);
        int count = dt.available();
        byte array[] = new byte[count];
        file.read(array);
        for (byte item : array) {
            char k = (char) item;
            System.out.print(k + "-");
        }
    }

}
