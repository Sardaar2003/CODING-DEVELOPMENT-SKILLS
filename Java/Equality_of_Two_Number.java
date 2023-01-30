import java.util.*;
class Equality_of_Two_Number {
    public static void main(String[] args) {
        int number1, number2;
        Scanner input = new Scanner(System.in);
        number1 = input.nextInt();
        number2 = input.nextInt();
        if (number1 == number2) {
            System.out.println("The numbers are equal ");
        }
        else {
            System.out.println("The numbers are not equal ");
        }
    }
}
