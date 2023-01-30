import java.util.*;

class Sum_of_Each_Digits_Using_Recurssion {
    int summmationValue = 0;
    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number : ");
        number = input.nextInt();
        Sum_of_Each_Digits_Using_Recurssion object = new Sum_of_Each_Digits_Using_Recurssion();
        int sumData = object.summation(number);
        System.out.println("The sum of each digits : " + sumData);

    }

    int summation(int numberData) {
        summmationValue = numberData % 10;
        if (numberData == 0) {
            return 0;
        }
        else {
            return summmationValue + summation(numberData / 10);
        }
        
    }
    
}
