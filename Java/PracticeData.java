import java.util.*;

class Game {
    public int numOfGues;
    public int setValue;

    Game() {
        Random rand = new Random();
        this.setValue = rand.nextInt(100);

    }

    void TakeInut() {
        System.out.println("Enter the number to be guessed : ");
        Scanner input = new Scanner(System.in);
        numOfGues = input.nextInt();
    }

    boolean CheckNumber() {
        if (numOfGues == setValue) {
            System.out.println("Correct element found " + setValue);
            return true;
        } else if (numOfGues < setValue) {
            System.out.println("The number is too less " + setValue);
            return false;
        } else if (numOfGues > setValue) {
            System.out.println("The element is too high " + setValue);
            return false;
        } else {
            return false;
        }
    }

}

public class PracticeData {
    public static void main(String[] args) {
        boolean b = false;
        while (!b) {
            Game obj = new Game();
            obj.TakeInut();
            b = obj.CheckNumber();
        }
    }

}
