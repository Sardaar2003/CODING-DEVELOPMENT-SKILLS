import java.util.*;

public class HeightClassification {
    public static void main(String[] args) {
        int height;
        Scanner input = new Scanner(System.in);
        height = input.nextInt();
        if (height > 175) {
            System.out.println("It is the tallest height");
        }
        else if (height > 155 && height <= 175) {
            System.out.println("It is the average height");
        }
        else {
            System.out.println("It is a dwarf height");
        }
    }
    
}
