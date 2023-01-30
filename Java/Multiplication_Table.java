import java.util.*;

class Multiplication_Table {
    public static void main(String[] args) {
        int number1;
        Scanner input = new Scanner(System.in);
        number1 = input.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(i + " * " + number1 +" : "+ number1 * i);
        }
    }
}
