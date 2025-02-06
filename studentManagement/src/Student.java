public class Student {
    private String ten ;
    private int id ;
    private String yob ;
    private double gpa ;

    public Student ( String ten , int id , String yob, double gpa){
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
    public String getname(){
        return ten ;
    }
    public int getid(){
        return id ;
    }
    public String getyob(){
        return yob ;
    }
    public void showProfile(){
        System.out.printf("|%8d|%-25s|%-4s|%4.1f|\n",
                                        id,ten,yob,gpa);
    }
    
}
