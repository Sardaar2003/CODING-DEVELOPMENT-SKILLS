import java.util.*;
import java.io.File;
public class fileHandling7 {
    public static void main(String[] args) {
        try{
            File file=new File("network.txt");
            if (file.createNewFile()){
                System.out.println("The file is created ");
            }
            else{
                System.out.println("The file already exists");
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
    
}
