import java.util.Scanner;
public class Amstrong_Range_One_to_thousand {
    static boolean Checking(int x) {
        int sum = 0;
        int value = x;
        while (value > 0) {
            int b = value % 10;
            sum = (int) (sum + Math.pow(b, 3));
            value /= 10;
        }
        if (sum == x)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        for (int i = 1; i <= 10000; i++) {
            if(Checking(i))
                System.out.println(i);
            
        }
    }
}
