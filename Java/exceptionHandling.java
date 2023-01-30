import java.util.*;

public class exceptionHandling {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true) {
            try {
                int a = input.nextInt();
                int b = input.nextInt();
                // int c= Integer.parseInt(12)
                System.out.println(a / b);

            } catch (Exception e) {
                System.out.println("Cannot Divide by Zero");
                break;

            }
        }

        System.out.println("Bye Bye ");

    }

}
