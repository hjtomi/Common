import java.util.Scanner;
import java.io.File;
import java.io.IOException;

class myFirstJava
{
   public static void main(String[] args) 
   {
      System.out.print("Enter your username: ");
      Scanner myScanner = new Scanner(System.in);
      String userName = myScanner.nextLine();
      System.out.print("Your username is "+userName+"\n");
      myScanner.close();

      try{
         File myFile = new File("filee.txt");
         if(myFile.createNewFile()){
            System.out.print("File created\n");
         }else{
            System.out.print("File already exists\n");
         }
      }catch(IOException e){
         e.printStackTrace();
      }

      Scanner myScanner2 = new Scanner("filee.txt");
      while(myScanner2.hasNextLine()){
         System.out.print(myScanner2.nextLine());
      }
      myScanner2.close();
   }
}
