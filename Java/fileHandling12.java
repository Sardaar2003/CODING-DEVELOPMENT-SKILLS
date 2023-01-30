import java.io.*;

public class fileHandling12 {
    public static void main(String[] args) {
        try {
            FileOutputStream file = new FileOutputStream(
                    "C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/data.txt");
            DataOutputStream dt = new DataOutputStream(file);
            dt.writeInt(65);
            dt.writeUTF("Hello India");
            dt.flush();
            dt.close();
            System.out.println("Success");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
