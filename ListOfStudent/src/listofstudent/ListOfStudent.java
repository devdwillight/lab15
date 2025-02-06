/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package listofstudent;

import Cabinet.Cabinet;
import java.util.Scanner;


public class ListOfStudent {
    public static void main(String[] args) {
        Cabinet se = new Cabinet();
        se.addStudent();
        se.addStudent();
        System.out.println("danh sach sinh vien : ");
        se.PrintStudent();
        se.removeStudent();
        System.out.println("List of Student affter remove :");
        se.PrintStudent();
    }
}
