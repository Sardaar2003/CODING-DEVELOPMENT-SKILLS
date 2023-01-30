import java.util.*;

class Divisibility_of_Five {
    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        number = input.nextInt();
        if (number % 5 == 0) {
            System.out.println("The number : " + number + " is divisible by 5 ");
        } else {
            System.out.println("The number : " + number + " is not divisible by 5 ");
        }
    }
    
}
