package data;
//  dùng như cái khuôn để đúc ra các opject, đối tượng cần lưu trữ info
// thứ làm ra để bán 
// khuôn phải kín tránh mất dữ liệu, nguyên liệu 
public class Dog {
    private String name;
    private int yob ;
    private double weight ;
public Dog(String name, int yob, double weight ){
    this.name = name ;
    this.yob = yob ;    
    this.weight = weight ;

    }
public void bark(){
        System.out.println(" cho ten la : " + name);
        System.out.println(" toi sinh nam : " + yob);
        System.out.println(" can nang : " + weight);
    }
    public int getyob(){
        return yob ;
    } 
    public String toString(){
     String tmp = String.format("|GOGO|%-10s|%4d|%4.1f|",
                            name , yob , weight); 
        return tmp;
    }

}

