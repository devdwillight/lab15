/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Cabinet;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Cabinet {
    private List <Student> arr = new ArrayList<>();
    private Scanner sc = new Scanner ( System.in);

    public Cabinet(){
    }

    
    
    
    public void addStudent(){
        String name , id ;
        int yob ;
        double gpa ;
        
        System.out.println("Iput student profile #" + (arr.size() + 1) + ":" );
        while(true){
        System.out.println("Input ID : ");
        id = sc.nextLine().trim().toUpperCase();
        Student xxx = searchStudentID(id);
        if ( xxx == null){
            break ;
        }
        else{
            System.out.println("Duplicated id. Try with another id : ");
        }
    }
        System.out.println("Inpput Name : ");
        name = sc.nextLine().trim().toUpperCase();
        System.out.println("Input Yob : ");
        yob = Integer.parseInt(sc.nextLine());
        System.out.println("Input gpa");
        gpa = Double.parseDouble(sc.nextLine());
        
        arr.add(new Student(id, name, yob, gpa));
        System.out.println(" SUCCESSFULLY ");
    }
    public void  PrintStudent(){
        if (arr.isEmpty()){
            System.out.println(" Empty");
            return ;
        }
        for ( Student x : arr){
            x.ShowProfile();
        }
    }
    public Student searchStudentID(String id ){
        if ( arr.isEmpty()){
            return null ;
        }
        for ( int i = 0 ; i < arr.size() ; i++){
            if ( arr.get(i).getID().equalsIgnoreCase(id) ){
                return arr.get(i);
            }
        }
        return null ;
    }
    public void SearchStudentID(){
        String id ;
        id = sc.nextLine().trim().toUpperCase();
        Student t = searchStudentID(id);
        if ( t == null){
            System.out.println("KHONG TIM THAY !");
        }
        else{
            t.ShowProfile();
        }
    }
    public void updateStudent(){
        String id ;
        double newGpa ;
        System.out.print("Input ID who you want to upDate GPA : ");
        id = sc.nextLine().trim().toUpperCase();
        Student xxx = searchStudentID(id);
        if ( xxx == null){
            System.out.println(" INVAILD !");
        }
        else {
            System.out.println("Da tim thay");
            System.out.print("Nhap GPA : ");
            newGpa = Double.parseDouble(sc.nextLine());
            xxx.setGpa(newGpa);
            System.out.println("student affter update");
            xxx.ShowProfile();
        }      
    }
    
    public int searchStudent(String id){
        if ( arr.isEmpty()){
            return -1 ;
        }
        for ( int i =0 ; i < arr.size() ; i++){
            if(arr.get(i).getID().equalsIgnoreCase(id)){
                return  i ;
            }
    }
        return -1 ;
    }
    public void removeStudent(){
        String id ;
        System.out.print("nhap id hoc sinh muon remove : ");
        id = sc.nextLine().trim().toUpperCase();
        int x = searchStudent(id);
        if ( x <  0){
            System.out.println("khong tim thay ");
        }
        else {
            System.out.println("Da tim thay sinh vien muon xoa ");
            arr.remove(arr.get(x));
            System.out.println("SUCCESSFULLY");
            
        }
    }
    
    
}
