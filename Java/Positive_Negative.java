import java.util.Scanner;
class Positive_Negative {
    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        number = input.nextInt();
        if (number < 0) {
            System.out.println("The number " + number + " is Negative .");
        }
        else {
            System.out.println("The number "+number+" is Positive .");
        }
    }
}
