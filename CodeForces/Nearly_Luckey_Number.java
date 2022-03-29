/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

public class Nearly_Luckey_Number {

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        String n = reader.next();
        int count = 0;
        for (int i = 0; i < n.length(); i++)
            if (n.charAt(i) == '4' || n.charAt(i) == '7')
                ++count;
        if (count == 7 || count == 4)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
