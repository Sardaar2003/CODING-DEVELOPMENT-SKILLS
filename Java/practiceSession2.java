import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class practiceSession2 {
    public static void main(String[] args) {
        try {
            File data = new File("character.txt");
            if (!data.exists()) {
                data.createNewFile();
            } else {
                FileOutputStream file1 = new FileOutputStream(data);
                DataOutputStream file = new DataOutputStream(file1);
                FileInputStream file3 = new FileInputStream(data);
                DataInputStream file4 = new DataInputStream(file3);
                file.writeInt(12);
                file.writeUTF("Hello Aray Monkey");
                int i = 0;
                while ((i = file4.read()) != -1) {
                    System.out.println(file4.readUTF());
                }
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

}
