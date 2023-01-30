import java.io.File;

public class fileHandling4 {
    public static void main(String[] args) {
        File file = new File("fileHandling");
        String[] arr = file.list();
        for (String temp : arr) {
            System.out.println(temp);
        }
    }
}
