import java.util.Scanner;

class oddOrEven {
    public static void main(String[] arg) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to be checked : ");
        int number= sc.nextInt();
        if (number%2==0){
            System.out.println("It is Even ");
           
        }
        else{
           System.out.println("It is Odd");
        }
        

    }
    
}
