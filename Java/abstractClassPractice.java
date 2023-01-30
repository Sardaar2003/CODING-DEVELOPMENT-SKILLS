abstract class Operations {
    float a = 12, b = 14, c;

    abstract void add();

    void subtract() {
        c = b - a;
        System.out.println("Result : " + c);
    }

    abstract void multiply();

    void Divide() {
        c = a / b;
        System.out.println("Result : " + c);

    }
}

public class abstractClassPractice extends Operations {
    void add() {
        c = a + b;
        System.out.println("Result : " + c);
    }

    void multiply() {
        c = a * b;
        System.out.println("Result " + c);
    }

    public static void main(String[] args) {
        Operations obj = new abstractClassPractice();
        obj.add();
        obj.multiply();
        obj.subtract();
        obj.Divide();
    }
}
