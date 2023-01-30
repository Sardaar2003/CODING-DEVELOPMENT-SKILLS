import java.io.File;
import java.io.IOException;

public class fileHandling1 {
    public static void main(String[] args) {
        // System.out.println("------1");
        // File file = new File("abc.txt");
        // System.out.println(file.exists());
        // System.out.println(file.isDirectory());
        // System.out.println(file.isFile());
        // System.out.println("------2");
        // File file = new File("abc.txt");
        // System.out.println(file); ---- Returns absolute path
        // String absolutePath = file.getAbsolutePath();
        // System.out.println("---->>>" + absolutePath);
        // File file2 = file.getAbsoluteFile(); ----> Creates a new file with the
        // absolute path
        // System.out.println("---->" + file2);
        // try {
        // file.createNewFile();
        // } catch (IOException e) { --------> Creates a new file if it does not exists
        // e.printStackTrace();
        // }
        // System.out.println(file.exists());
        File file = new File("fileHandling");
        file.mkdir();
        System.out.println(file);
    }

}
