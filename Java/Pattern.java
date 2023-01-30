// import java.util.*;
public class Pattern {
    public static void main(String args[]) {
        int value = 1;
        while (value < 6) {
            if (value % 2 == 1) {
                for (int i = 1; i <= value; i++) {
                    System.out.print('*');
                }
            }
            value += 2;
            System.out.println();
        }
        int value2 = 3;
        while (value2 >0) {
            if (value2 % 2 == 1) {
                for (int i = 1; i <= value2; i++) {
                    System.out.print('*');
                }
            }
            value2 -= 2;
            System.out.println();
        }
    }
}
