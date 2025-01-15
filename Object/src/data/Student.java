package data;

public class Student {
    private  String ten ;  // instance variable 
    private String id ;
    private int yob ;
    private double gpa ;

    public Student ( String ten , String id , int yob, double gpa){
        this.ten = ten ;
        this.id = id ;
        this.yob = yob ;
        this.gpa = gpa ;
    } 
    public void setgpa ( double gpa){
        this.gpa = gpa ;
    }
    public double getgpa (){
        return gpa ;
    }
    public  String getname(){
        return ten ;
    }
    public String getid(){
        return id ;
    }
    public int getyob(){
        return yob ;
    }
    public void showProfile(){
        System.out.printf("|&-8s|&-25s|&4d|&4.1f|\n",
                                        id,ten,yob,gpa);
    }
//    public static  void sayHi(){
//        System.out.println(" sinh vien say hi : " + ten);
//    }
}
