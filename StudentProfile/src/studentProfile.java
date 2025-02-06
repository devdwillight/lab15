import java.util.Scanner;

public class studentProfile {
    public static void main(String[] args) throws Exception {
        inputProfile();
    }
    public static void inputProfile() {
        //ko OOP cần hiểu về việc nhập  info trước đã , ko chơi class student
        String name , address ;
        int yob ;
        Scanner sc = new Scanner(System.in);
        System.out.print(" inPut Name : ");
        name = sc.nextLine().toUpperCase();
        
        
        System.out.print("InPut yob : ");
        // yob = sc.nextInt();
        // để lại rác tron buffer còn nextline là hốt hết vì chỉ lấy int 
        //  ADP
        // sc.nextLine();
        //   xóa dấu cách hoặc dấu enter, xóa bộ đệm trc khi nhập , không trả về 
                                     /* sử dụng STATIC  */
        String tmp = sc.nextLine();
         yob = Integer.parseInt(tmp);

        System.out.print(" Input address : ");
        address = sc.nextLine().toUpperCase();
        // next line () : đốt sạch buffer, loại bỏ enter, còn chuỗi đối số - > số 

        System.out.println(" Here Your Profile : ");
        System.out.println(" Name :" + name);
        System.out.println(" Yob : " + yob);
        System.out.println(" address : " + address);
    }

}
