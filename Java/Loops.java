import java.util.Scanner;

public class Loops {
    public static void main(String arg[]) {
        // for (int i = 1; i <= 10; i=i+5) {
        //     System.out.println("Hello World : " + i);
        // }
        // System.out.println("Termination Successfull");
        int i = 1;
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        
        // int sum = 0;
        for (; i < 11; i++) {
            System.out.println(number+" * "+i+" : "+number*i);
        }
        // while (i < 11) {
        //     System.out.println(i);
        //     i++;
        // }
// do{
//     System.out.println(i);
//     i++;
// }
// while (i < 11);
// for (; i < number; i++) {
//     sum += i;

// }
// System.out.println("The sum of first "+number+" is "+sum);
    }
    
}
