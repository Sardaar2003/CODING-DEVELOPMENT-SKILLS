import java.util.*;
public class Generic_Method1 {
    public static <T1> void changePosition(T1[] arrayData, int position1, int position2) {
        T1 temp = arrayData[position1];
        arrayData[position1] = arrayData[position2];
        arrayData[position2] = temp;
        for (int i=0;i< arrayData.size();i++){
            System.out.println(arrayData[i]);
        }

    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int size=input.nextInt();
        int array[]=new int[size];
        for (int i=0;i<size;i++){
            array[i]=input.nextInt();
        }

        int firstPosition=input.nextInt();
        int secondPosition=input.nextInt();
        changePosition(array,firstPosition,secondPosition);
        
    }

}
