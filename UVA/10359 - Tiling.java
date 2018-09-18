/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package solution;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Nabil
 */
public class Solution {
    public static Scanner sc = new Scanner(System.in);
    public static BigInteger TWO = new BigInteger("2");
    public static BigInteger dp[] = new BigInteger[300];
    
    public static BigInteger func(int n)
    {
        if(n==1) return BigInteger.ONE;
        if(n==0) return BigInteger.ONE;
        if(!dp[n].equals(BigInteger.ZERO)) {
            return dp[n];
        } else {
        }
        dp[n] = func(n-1).add(TWO.multiply(func(n-2)));
        return dp[n];
    }
    
    public static void main(String[] args) {
        int n;
        for(int i = 0; i < 300; i++) dp[i] = BigInteger.ZERO;
        while(sc.hasNextInt())
        {
            n = sc.nextInt();
            System.out.println(func(n));
        }
    }
    
}
