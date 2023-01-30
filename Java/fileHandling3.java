import java.io.File;

public class fileHandling3 {
    public static void main(String[] args) {
        File file = new File("practice.txt");
        File file2 = new File("fileHandling/Chapter1/dinesh.txt");
        System.out.println(file.renameTo(file2));
    }
}
