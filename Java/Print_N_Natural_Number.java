import java.text.BreakIterator;
import java.util.Scanner;
public class Print_N_Natural_Number {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();

        Print_N_Natural_Number obj = new Print_N_Natural_Number();
        obj.naturalNumber(number,1);

    }

    int naturalNumber(int value,int num) {
        if (num==value)
            return 0;
        else {
            System.out.println(num);
            return naturalNumber(value,num++);
        }

    }
}
