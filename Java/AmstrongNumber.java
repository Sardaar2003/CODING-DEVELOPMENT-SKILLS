import java.util.Scanner;
import java.util.zip.CheckedInputStream;

public class AmstrongNumber {
    static boolean Checking(int x, int y) {
        int sum = 0;
        int value=x;
        while (value > 0) {
            int b = value % 10;
            sum = (int) (sum + Math.pow(b, y));
            value /= 10;
        }
        if (sum==x)
            return true;
        else
            return false;
    }
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        int number=input.nextInt();
        int sizeData = (int) Math.log10(number) + 1;
        // System.out.println(sizeData);
        if (Checking(number, sizeData))
        System.out.println(number+" is a Amstrong Number");
        else
        System.out.println(number+" is not a Amstrong Number");

    }
}
