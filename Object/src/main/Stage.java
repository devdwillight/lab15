/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package main;

import data.Student;

/**
 *
 * @author PC
 */
public class Stage {
    public static void main(String[] args) {
        checkObjectV3();
    }
    public static void checkObjectV3(){
        Student s1 = new Student("taiLoc","002", 2006, 5.0);
        //           đã tương đương tạo độ rồi , thảy tọa độ đó đi đâu thoi
        //           thảy cho biến object nào đó giữ giùm tọa độ 
        // biến đó có nghĩa là tọa độ chấm Nghĩa là  NEW CHẤM LUÔN 
        //vì biên có tọa độ  từ new. CHỐT HẠ :  NEW NẮM TỌA ĐỘ 
        new Student("LOCPHAT","002", 2006, 5.0).showProfile();
        //Anonymous Object(vô danh )
        
    }
    public static void checkObjectV2(){
         Student s1 = new Student("locphat", "de190303", 2003, 5.0);
        s1=new Student("phattai","de190333", 2001, 3.5);
        s1.showProfile();
    }
    
    public static void checkObjectV1() {
        Student s1 = new Student("ducle","1123" , 2005, 4.6);
        Student x = s1 ;
        x.showProfile();
        s1 = new Student("leduc", "1234", 2005, 4.1 );
        s1.showProfile();
        // tmp : reference var     object vùng ram bự  trong HEAP
        // object var
        // s1 là biến, vậy nó có thể thay đổi value 
        //s1 li dị vùng clone ducle, chuyển sang kết nối với leduc
        //ống dòm di chuyển sang chổ mới , com trỏ lưu tạo dộ mới biến thay đổi giá trị
        // gần nhất 
//         s1.showProfile();
System.gc();
         // mất tạo độ vùng clone ducle
         // vùng ram không có ai trỏ tới, thì định kì khi chạy app, Java machine (phần mềm chạy song song với wind)
         // kiểm soát  app bạn -> giết/ clear vùng clone ko có con trỏ 
         // cty MTDT, JVM có đoạn code,module  giám sát heap, xem đứa nào có mồ côi không 
         // giết ngay và luôn( độ trễ  if any) ~ free( con trỏ bên c malloc())
         // GIÁM  sát này gọi tên là    GARBAGE COLLECTER, người gom rác , CTY MTDT
         //
        
        
        
    }
    
}
