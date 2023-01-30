import java.util.Scanner;

public class Reverse_A_Number_Sum_Using_Do_while_Loop {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        int sum = 0;
        int reverse = 0;
        int value = number;
        do {
            int b=value%10;
            sum=sum*10+b;
            reverse+=b;
            value/=10;
        }
        while (value > 0);
        System.out.println("The sum of its digits : " + reverse);
        System.out.println("The reverse number : "+sum);

    }
    
}
