import java.io.IOException;
import java.util.Scanner;
import java.math.BigInteger;

 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
    Scanner reader = new Scanner(System.in);
    
    BigInteger bigInteger4   = new BigInteger("4");
    BigInteger bigInteger15  = new BigInteger("15");
    BigInteger bigInteger55  = new BigInteger("55");
    BigInteger bigInteger100 = new BigInteger("100");
    BigInteger bigInteger400 = new BigInteger("400");
    
    boolean newLine = false;
    
    while (reader.hasNextLine()) {
      String line = reader.nextLine();
      BigInteger year = new BigInteger(line);
      
      int leapYear = 0;
      int huluculu = 0;
      int bulukulu = 0;
      
      /* Teste do ano bissexto (leap year) */
      if ((
        (year.mod(bigInteger4).intValue() == 0) &&
        (year.mod(bigInteger100).intValue() != 0)) ||
        (year.mod(bigInteger400).intValue() == 0)) {
        leapYear = 1;
      }

      /* Teste do Festival Huluculu  */
      if (year.mod(bigInteger15).intValue() == 0) {
        huluculu = 1;
      }
      
      /* Teste do Festival Bulukulu  */
      if ((leapYear == 1) && (year.mod(bigInteger55).intValue() == 0)) {
        bulukulu  = 1;
      }


      if (!newLine) {
        newLine = true;
      } else {
        System.out.println("");
      }


      if (leapYear == 1) {
        System.out.println("This is leap year.");
      }
      
      if (huluculu == 1) {
        System.out.println("This is huluculu festival year.");
      }
      
      if (bulukulu == 1) {
        System.out.println("This is bulukulu festival year.");
      }

      if ((leapYear != 1) && (bulukulu != 1) && (huluculu != 1)) {
        System.out.println("This is an ordinary year.");
      }
    }
    }
 
}

