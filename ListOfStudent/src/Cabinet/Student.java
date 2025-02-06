/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Cabinet;


public  class Student {
     protected String name ;
     protected String ID ;
     protected int yob;
     protected double gpa ;
     
    public  Student (String ID, String name, int yob ,double gpa ){
        this.name = name ;
        this.ID = ID ;
        this.yob = yob ;
        this.gpa = gpa ;
    }

    public String getName() {
        return name;
    }

    public String getID() {
        return ID;
    }

    public int getYob() {
        return yob;
    }

    public double getGpa() {
        return gpa;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setID(String ID) {
        this.ID = ID;
    }

    public void setYob(int yob) {
        this.yob = yob;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }
    

    public  void ShowProfile(){
        System.out.printf("|%-7s|%-7s|%4d|%4.1f|\n",ID, name , yob, gpa );
    }
    
}
