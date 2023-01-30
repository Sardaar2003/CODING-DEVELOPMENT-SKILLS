import java.util.*;
import java.io.FileWriter;
public class InputOutputStream5 {
    public static void main(String[] args) {
        try{
            FileWriter file=new FileWriter("C:/Users/MANTEJ SINGH/OneDrive/Desktop/CODING DEVELOPMENT SKILLS/Java/fileHandling/Chapter1/final.txt");
            file.write("Hello India");
            file.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
        System.out.println("Success");
    }
    
}
