import java.io.File;

public class fileHandling2 {
    public static void main(String[] args) {
        File file = new File("abc.txt");
        File file2 = new File("practice.txt");
        System.out.println(file.renameTo(file2));
    }

}
