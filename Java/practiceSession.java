import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;

public class practiceSession {
    public static void main(String[] args) {
        try {
            File file = new File("helloWorld.txt");
            FileOutputStream file3 = new FileOutputStream(file);
            BufferedOutputStream file5 = new BufferedOutputStream(file3);
            // FileInputStream file2 = new FileInputStream(file);
            if (!file.exists()) {
                file.createNewFile();
            } else {
                String value = "Hello Adiya Happy Birthday";
                byte[] array = value.getBytes();
                file3.write(array);
                System.out.println("The Entire Operation is performed");
                FileReader file2 = new FileReader(file);
                // String data = file2.toString();
                // System.out.println(data);
                System.out.println(file.getName());
                FileInputStream file4 = new FileInputStream(file);
                int i = 0;
                while ((i = file4.read()) != -1) {
                    System.out.print((char) i);
                }
                String value2 = "Arya is an Idot";
                byte[] array2 = value2.getBytes();
                file5.write(array2);
                // BufferedOutputStream file5 = new BufferedOutputStream(file);

            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}
