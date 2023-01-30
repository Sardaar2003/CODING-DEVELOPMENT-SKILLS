import java.util.*;
public class Conditional{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();
        switch (button) {
            case 1: {
                System.out.println("Hello");
                break;

            }
            case 2: {
                System.out.println("Namaste");
                break;
            }
            case 3: {
                System.out.println("Bonjour");
                break;
            }
            default: {
                System.out.println("Invalid Button");
                break;
            }
        }
        // int number1 = sc.nextInt();
        // int number2 = sc.nextInt();
        // if (age > 18) {
        //     System.out.println("Adult");
        // }
        // else {
        //     System.out.println("Not an Adult");
        //         // }
        //         if (number % 2 == 0) {
        //             System.out.println("It is divisible by 2");

        //         }
        //         else {
        //     System.out.println("It is not divisible by 2");
        // }
        // if (number1 == number2) {
        //     System.out.println("They are equal");
        // } else if (number1 > number2) {
        //     System.out.println(number1 + " is greater than " + number2);
        // }
        // else{
        //     System.out.println(number2+" is greater than "+number1);
        // }
    }

}