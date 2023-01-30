class Outer {
    int outer_x = 100;

    void test() {
        Inner inner = new Inner();
        inner.display();
    }

    class Inner {
        int y = 10;

        void display() {
            System.out.println("Result : " + y);

        }
    }

    // void Show() {
    // System.out.println("Result : " + y);
    // }
}

public class InnerMethod {
    public static void main(String args[]) {
        Outer outer = new Outer();
        outer.test();
    }

}
