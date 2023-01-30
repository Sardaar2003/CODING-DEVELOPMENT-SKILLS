import java.util.Scanner;
public class Reverse_A_Number_Using_Recursion {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        int size = ((int) Math.log10((double) number)) + 1;
        Reverse_A_Number_Using_Recursion obj = new Reverse_A_Number_Using_Recursion();
        int a = obj.Reverse(number ,size);
        System.out.println("Reverse "+a);

    }

    int Reverse(int number,int count){
        if (count==1)
        return number;
        else{
            int b = number % 10;
            number/=10;
            return (int)((b*Math.pow(10,count-1))+Reverse(number,--count));
        }
    }
}

      
    

