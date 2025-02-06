/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package basicarray;

/**
 *
 * @author PC
 */
public class Student {
    private String name ;
    private String id ;
    private int yob;
    private double gpa ;
    public Student ( String name , String id , int yob , double gpa){
    this.name = name ;
    this.id = id ;
    this.yob= yob ;
    this.gpa = gpa;
} 
    public String getName(){
        return name ;
    }
    public String getId(){
        return id ;
    }
    public int getYob(){
        return yob ;
    }public double getGpa(){
       return gpa ;
    }
    public void ShowProfile(){
        System.out.printf(" |%-25s|%-8s|%4d|%4.1f| \n",
                                        name, id ,yob ,gpa );
    }

    @Override
    public String toString() {
        return "Student{" + "name=" + name + ", id=" + id + ", yob=" + yob + ", gpa=" + gpa + '}';
    }
    
    
        
    
}
