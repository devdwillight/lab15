/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package basicarray;

/**
 *
 * @author PC
 */
public class BasicArray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        playWithPrimitiveArray();
    }
    public static void playWithPrimitiveArray(){
        int arr[]= new int[10];
        Student s1, s2 ,s3 ;
        // đừng nhầm khi new , 2 loại ngoặc 
        // ngoặc () khi đúc 1 đối tượng 
        //[] khi dùng cho nhiều biến, tên gọi tắt 
        Student List[] = new Student[3];
        // List[0]...List[9]    0 là DEFAUTF TRỎ VÀO TỌA ĐỘ 0 CỦA RAM , ĐỊA CHỈ 0 CỦA RAM .       
        int count = 0 ;
        List[0]= new Student ("leduc", "001", 2003, 4.5);
        
        List[1] = new Student ("ducle","002", 2001, 3.4);
        
        List[2] = new Student("huynh", "023", 2006, 1.3);
        
        System.out.println("The Lits of Student : ");
        for ( int i = 0 ; i < List.length ; i++){
            List[i].ShowProfile();
        }
        //NGUYÊN TẮC KHI CHƠI VỚI MẢNG LÀ : BIẾN COUNT ĐỂ CHO BIẾT 
        // MẢNG ĐÃ ĐẦY CHƯA, GÁN VALUE ĐẾN ĐÂU FOR ĐẾN ĐÓ 
        // BỊ DEFAULT VỚI PRIMITIVE, BỊ NULL VỚI MẢNG OBJECT
        
        
    }
    
}
