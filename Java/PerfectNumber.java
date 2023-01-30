import java.util.Scanner;

public class PerfectNumber {
    static boolean SumData(int x) {
        int sum = 0;
        for (int i = 1; i <= (int) x / 2; i++) {
            if (x % i == 0)
                sum += i;
        }
        if (sum == x)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        if (SumData(number))
            System.out.println(number + " is a Perfect Number");
        else
        System.out.println(number+" is not a Perfect Number");
    }
    
}
