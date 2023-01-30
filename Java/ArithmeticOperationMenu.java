import java.net.SocketTimeoutException;
import java.util.*;
class ArithmeticOperationMenu {
    public static void main(String[] args) {
        int number1, number2;
        double Variable;
        Scanner input = new Scanner(System.in);
        while (true) {
            System.out.println("Enter the first number : ");
            number1 = input.nextInt();
            System.out.println("Enter the second Number : ");
            number2 = input.nextInt();
            System.out.println("\t\tWelcome to the MENU ");
            System.out.println("\t\t 1.Addition");
            System.out.println("\t\t 2.Substraction");
            System.out.println("\t\t 3.Multiplication");
            System.out.println("\t\t 4.Division");
            int choice;
            System.out.println("\t\t Enter the choice : ");
            choice = input.nextInt();
            switch (choice) {
                case 1: {
                    System.out
                            .println(
                                    "The sum of the number " + number1 + " + " + number2 + " : " + (number1 + number2));
                    break;
                }
                case 2: {
                    System.out
                            .println("The difference of the number " + number1 + " - " + number2 + " : " + (number1
                                    - number2));
                    break;
                }
                case 3: {
                    System.out
                            .println("The multiplication  of the number " + number1 + " * " + number2 + " : "
                                    + (number1 * number2));
                    break;
                }
                case 4: {
                    System.out
                            .println("The divsion  of the number " + number1 + " / " + number2 + " : "
                                    + (number1 / number2));
                    break;

                }
                default: {
                    System.out.println("Wrong input Entered ");
                    break;
                }

            }
            break;
        }
    }
    
}
