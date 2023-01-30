import java.io.File;

public class fileHandling5 {
    public static void main(String[] args) {
        File file = new File("fileHandling/Chapter1/dinesh.txt");
        System.out.println(file.delete());
    }
}
