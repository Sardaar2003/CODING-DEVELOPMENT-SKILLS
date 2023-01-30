import java.util.*;

class GenericClass<T1> {
    Object integer;

    // private T1 integerData;
    GenericClass(Object data) {
        this.integer = data;
        System.out.println(this.integer);
    }

}

public class Generic_Class {
    public static void main(String[] args) {
        GenericClass<Integer> ob1 = new GenericClass<Integer>("Hello World");
    }

}
