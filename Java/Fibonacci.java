import java.util.Scanner;

public class Fibonacci {
    
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        System.out.println(0);
        System.out.println(1);

        while (number != 0) {
            int value = 0;
            int value2 = 1;
            System.out.println((value + value2));
            int temp ;
            temp = (value+value2);
            value2 = value;
            value = temp;
            number -= 1;
            System.out.println("value :"+value+"value 2:"+value2);
        }

    }
    
}
