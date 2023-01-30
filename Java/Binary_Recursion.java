import java.util.*;

class Binary_Recursion {
    int binaryFormat;

    public static void main(String[] args) {
        int number;
        Scanner input = new Scanner(System.in);
        number = input.nextInt();
        Binary_Recursion object = new Binary_Recursion();
        String result = object.Binary(number);
        System.out.println("The number in Binary format : " + result);

    }

    String Binary(int numberData) {
        if (numberData > 0) {
            binaryFormat = numberData % 2;
            numberData /= 2;
            return binaryFormat + "" + Binary(numberData);
        }
        return "";
    }
    
}
