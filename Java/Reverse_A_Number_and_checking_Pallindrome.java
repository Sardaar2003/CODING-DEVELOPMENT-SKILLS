import java.util.Scanner;
public class Reverse_A_Number_and_checking_Pallindrome {
    static boolean ReversePallin(int x) {
        int sum = 0;
        int value = x;
        while (value > 0) {
            int b = value % 10;
            sum = sum * 10 + b;
            value /= 10;
        }
        if (sum == x)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        if (ReversePallin(number))
            System.out.println("It is a Pallindrome");
        else
        System.out.println("It is not a Pallindrome");
    }
}
