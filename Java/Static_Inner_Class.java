
public class Static_Inner_Class {
    int x = 10;
    static int y = 20;

    static class Inner {
        void show() {
            System.out.println(y);
        }
    }

    public static void main(String args[]) {
        System.out.println("Outside the class : " + y);
        Inner obj = new Inner();
        obj.show();
        System.out.println("Accessing outside the class : ");
        Static_Inner_Class.Inner obj2 = new Static_Inner_Class.Inner();
        obj2.show();

    }

}
