import java.util.*;

class PerDigitsNumber {
    public static void main(String[] args) {
        int number, preCaution, counterVariable = 0;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number : ");
        number = input.nextInt();
        preCaution = number;
        while (number > 0) {
            counterVariable++;
            number /= 10;
        }
        while (preCaution > 0) {
            System.out.println("Digits at the position : " + counterVariable + " : " + preCaution % 10);
            preCaution /= 10;
            counterVariable--;
        }
    }
    
}
