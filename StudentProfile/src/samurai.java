import java.util.Scanner;

public class samurai {
    public static void main(String[] args) {
        inputProfile();
    }
    public static void inputProfile() {
        
        String name , address ;
        int yob ;
        Scanner sc = new Scanner(System.in);
        System.out.print(" inPut Name : ");
        name = sc.nextLine().toUpperCase();
        
        
       while(true){
    try{
        System.out.print("InPut yob : ");
        String tmp = sc.nextLine();
        yob = Integer.parseInt(tmp);
        break;
    }
    catch(Exception c ){
        System.out.println(" Please input again !");

    }
}
        

        System.out.print(" Input address : ");
        address = sc.nextLine().toUpperCase();
        

        System.out.println(" Here Your Profile : ");
        System.out.println(" Name :" + name);
        System.out.println(" Yob : " + yob);
        System.out.println(" address : " + address);
    }
}
