import java.util.*;

class Maximum_of_three_numbers{
    public static void main (String[ ] args){
        int number1,number2,number3;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the first number : ");
        number1 = input.nextInt();
        System.out.println("Enter the second number : ");
        number2 = input.nextInt();
        System.out.println("Enter the third number : ");
        number3 = input.nextInt();
        if (number1 > number2 && number1 > number3) {
            System.out.println(number1 + " is the largest number among them");
        }
        else if (number2 > number1 && number2 > number3) {
            System.out.println(number2 + " is the largest number among them");
        }
        else {
            System.out.println(number3+" is the largest number among them");
        }
    }
}
