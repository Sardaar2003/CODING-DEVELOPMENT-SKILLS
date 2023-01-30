import java.util.Scanner;
public class Reverse_A_Number {
    static int Reverse(int x){
        int sum=0;
        int number=x;
        while(number>0){
            int b=number%10;
            sum=sum*10+b;
            number/=10;
        }
        return sum;
    }
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        int number=input.nextInt();
        System.out.println(Reverse(number));
    }
    
}
