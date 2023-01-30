import java.util.Scanner;

public class Body_Mass_Index {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        String patientName = input.next();
        int weightPatient = input.nextInt();
        int heightPatient = input.nextInt();
        float bmiIndex = Math.pow(heightPatient, 2);
    }

}
