import java.util.Scanner;

public class Prime_Number_Recursion {
    static boolean PrimeNumber(int x, int y) {
        if (y < x) {
            if (x % y != 0) {
                return PrimeNumber(x, ++y);
            } else {
                return false;
            }
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        if (PrimeNumber(number, 2)) {
            System.out.println(number + " is a Prime Number");
        }
        else
        System.out.println(number + " is a not Prime Number");
    }
    
}
