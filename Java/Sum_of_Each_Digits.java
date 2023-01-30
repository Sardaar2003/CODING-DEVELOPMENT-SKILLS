import java.util.*;
class Sum_of_Each_Digits {
    public static void main(String[] args) {
        int number1;
        int remainder;
        Scanner input = new Scanner(System.in);
        number1 = input.nextInt();
        int temper = number1;
        int sumDigits = 0;
        while (number1 > 0) {
            remainder = number1 % 10;
            sumDigits += remainder;
            number1 /= 10;
        }
        System.out.println("The sum of each digits of number :"+temper+"  : "+sumDigits);
    }
}
