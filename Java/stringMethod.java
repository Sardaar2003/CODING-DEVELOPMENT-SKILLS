import java.net.SocketTimeoutException;
import java.util.*;

public class stringMethod {
    public static void main(String[] args) {
        String data = "Hello World";
        String value = "Hello India";
        System.out.println(data.length());
        System.out.println(data.isBlank());
        System.out.println(data.isEmpty());
        System.out.println(data.charAt(2));
        System.out.println(data.equals(value));
        System.out.println(data.repeat(12));
        System.out.println(data.contains(value));
        System.out.println(data.replaceAll(data, value));
        System.out.println(data.toCharArray());
        char arryData[] = data.toCharArray();
        for (int i = 0; i < data.length(); i++) {
            System.out.println(arryData[i]);
        }
        System.out.println(data.);
    }
}
