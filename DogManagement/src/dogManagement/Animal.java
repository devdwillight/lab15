package dogManagement ;

public abstract class Animal {
  protected double weight ;

 public abstract void makeNoise(){
    System.out.println("");
 }

}
public class Cat extends Animal {
String name ;
int age ;
String color ;
public  Cat ( String name , int age, color){
super(5.0);
}
    @Override
     public void makeNoise(){
        System.out.println("meomeo");
     }

}
public class Lion extends Animal{
    boolean gender ;
    
}
