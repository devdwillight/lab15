import java.util.Scanner;
// stacic nằm ở vùng nhớ riêng mà các opject nào cũng được dùng CHUNG
// dùng chung cho cùng class 
// ăn theo thằng cuối cùng nó gán/đổ
// CHỐT HẠ : ko dùng STATIC cho những thứ đặc điểm/ hàm mà của riêng những opject 
// tui có mã số , thằng kia cũng có mã số, nhưng điều là riêng của mỗi đứa
// chung đặc điểm , khác value, vậy phải có clone riếng, non-static 
import java.util.Scanner;

public class Management {
    public static void main(String[] args) {
        inputStudent();

    }
    public static void inputStudent(){
        Student List[] = new Student[3];
        System.out.println("Input Profile of Student: ");
        for ( int i = 0 ; i< 3 ; i++){
            Scanner x = new Scanner(System.in);
             System.out.print("Input name : ");
            String name = x.nextLine();
             System.out.print("Input ID : ");
              int ID = Integer.parseInt(x.nextLine());
             System.out.print(" Input yob : ");
              String yob = x.nextLine();
             System.out.print(" Input gpa : ");
              double gpa = x.nextDouble();      
             List[i]= new Student (name , ID , yob , gpa);
        }
        for( int i = 0 ; i < 3 ; i++){
            List[i].showProfile();
            System.out.println("-----------------");
        }
       
    
    }

}
