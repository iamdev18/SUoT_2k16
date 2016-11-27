package homework;
import java.util.Arrays;
import java.util.Scanner; // String who includes i/o functions

public class Homework {
    static final int T = 20; // MAX_VALUE cols and rows
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in); 
        System.out.println("Введіть довжину матриці:");//cols
        int n = in.nextInt();
        System.out.println("Введіть ширину матриці:");//rows
        int k = in.nextInt();
        if(k>T||n>T)
        {   
           System.out.println("Число елементів матриці більше ніж " + T );
           return;
        }
        int A[][] = new int [n][k];
        int[] flat=new int [n*k];
        int counter=0;
        for(int i=0;i<n;i++)
        {
            for (int j=0; j<k; j++)        
            {
            System.out.println("Введіть ["+i+"]["+j+"] елемент массиву:");
            A[i][j]= in.nextInt();
            }           
        }
        System.out.println("Матриця до сортування:");
      for(int i=0;i<n;i++){
            for (int j=0; j<k; j++)
        {
            System.out.print(A[i][j]+" ");     
        }           
           System.out.println();
    }
      System.out.println("Матриця після сортування: ");
         
       
      for(int i=0;i<n;i++)
         {
             for (int j=0; j<k; j++)
            {
                flat[counter++] = A[i][j];                    
            } 
         }
      Arrays.sort(flat);
      
       for (int i = 0; i < flat.length>>1; i++)
       {
            // Меняет два элемента местами:
            flat[flat.length-1-i] ^= flat[i] ^= flat[flat.length-1-i];
            flat[i] ^= flat[flat.length-1-i];
        }
       
      counter=0;
      for(int i=0;i<n;i++)
         {
             for (int j=0; j<k; j++)
            {
                A[i][j] = flat[counter++];                    
            } 
         }
       for(int i=0;i<n;i++)
         {
             for (int j=0; j<k; j++)
            {
               System.out.print(" " + A[i][j]);                     
            } 
             System.out.println();
         }
      
         float timer = System.currentTimeMillis();
         
         System.out.println("Час виконання програми:\n " + timer);
    }
    
}
