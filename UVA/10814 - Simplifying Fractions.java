/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg10814.simplifying.fractions;

import java.math.*;
import java.util.Scanner;
/**
 *
 * @author Nabil
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
        int t,T;
        Scanner sc = new Scanner(System.in);
        BigInteger n,m,gd;
        T = sc.nextInt();
        for(t = 1; t <= T; t++)
        {
            char ch;
            n = sc.nextBigInteger();
            ch = sc.next().trim().charAt(0);
            m = sc.nextBigInteger();
            gd = n.gcd(m);
            System.out.print(n.divide(gd));
            System.out.print(" / ");
            System.out.println(m.divide(gd));
            System.gc();
        }
    }
}
