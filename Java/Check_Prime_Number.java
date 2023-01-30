import java.util.Scanner;

public class Check_Prime_Number {
    static boolean PrimeNumber(int x) {
        if (x == 2)
            return true;
        else {
            for (int i = 2; i <= (int) Math.sqrt(x); i++) {
                if (x % i == 0)
                    return false;
            }
            return true;
        }
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        if (PrimeNumber(number))
            System.out.println(number + " is a Prime Number");
        else
        System.out.println(number+" is not a Prime Number");
        // System.out.println(PrimeNumber(number));
    }
    
}
