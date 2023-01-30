import java.util.*;;
class Swapping_Numbers {
    public static void main(String[] args) {
        int number1, number2, temp;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the first number : ");
        number1 = input.nextInt();
        System.out.println("Enter the second number : ");
        number2 = input.nextInt();
        System.out.println("The value of "+number1+" and "+number2);
        temp = number2;
        number2 = number1;
        number1 = temp;
        System.out.println("The value of "+number1+" and "+number2);
    }
}
