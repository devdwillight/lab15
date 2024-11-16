
package test;


import java.util.Scanner;
import javax.swing.text.StyleConstants;
public class Test {
    
public static void main(String[] args) {
    Scanner point = new Scanner (System.in);
    Point ListOfPoint[] = new Point [3];
    for ( int i = 0 ; i < ListOfPoint.length; i++){
        System.out.println("Nhap Point" + (i+1));
        System.out.printf("nhap x : ");
        int x = point.nextInt();
        System.out.printf("nhap y : ");
        int y = point.nextInt();
        ListOfPoint[i]= new Point(x,y);
    }
    showDistances(ListOfPoint);
    OutPut2(ListOfPoint[0], ListOfPoint[1]);
    OutPut2(ListOfPoint[0], ListOfPoint[2]);
    areaOfTriangle(ListOfPoint);
    
    
    
}
public static void showDistances(Point[] points) {
        for (int i = 0; i < points.length - 1; i++) {
            for (int j = i + 1; j < points.length; j++) {
                System.out.printf("Do dai AB-AC-BC : %.2f\n", calculate(points[i], points[j]));
            }
        }
    }
public static void OutPut2(Point a ,Point b){
    System.out.println("A dxO with B-C: " + dxO(a, b));
    System.out.println("A dxT with B-C: " + dxT(a,b));
    System.out.println("A dxH with B-C: " + dxH(a,b));
    System.out.println("----------------------------");
}


public static double calculate( Point a, Point b){
        int x = b.getX()- a.getX(); 
        int y = b.getY() - a.getY();
        return Math.hypot(x, y);// tinh do dai cua 2 vector 
    }

public static boolean dxO(Point a, Point b){
        return  a.getX() == -b.getX() && a.getY() == -b.getY();
    }
public static boolean dxT(Point a , Point b){
        return a.getX()==b.getX()&& a.getY() == -b.getY();
    }
public  static boolean dxH(Point a , Point b){
        return (a.getY() == b.getY() && a.getX() == -b.getX());
            
    }
public static void areaOfTriangle(Point[] points) {
        double[] distances = new double[3];
        for (int i = 0; i < points.length - 1; i++) {
            distances[i] = calculate(points[i], points[i + 1]);
        }
        distances[2] = calculate(points[0], points[2]);
        
        double a = distances[0];
        double b = distances[1];
        double c = distances[2];
        
        if (a + b <= c || b + c <= a || a + c <= b) {
            System.out.println("Khong du dieu kien de tao thanh mot tam giac.");
        } else {
            double p = (a + b + c) / 2;
            double area = Math.sqrt(p * (p - a) * (p - b) * (p - c));
            System.out.printf("Dien tich tam giac la : %.2f\n", area);
        }
    }

}