import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class GradingEquivalent {
    public static void main(String[] args) throws IOException {
        char a;
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter grade of the student:");
        a = (char) bf.read();
        if (a == 'A' || a == 'a') {
            System.out.println("Student has got marks between above 80 out of 100.");
        } else if (a == 'B' || a == 'b') {
            System.out.println("Student has got marks above 60 but less than equal to 80 out of 100.");
        } else if (a == 'C' || a == 'c') {
            System.out.println("Student has got marks above 40 but less than equal to 60 out of 100.");
        } else {
            System.out.println("Student has failed");
        }
    }
}