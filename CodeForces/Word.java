/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

public class Word {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        String name = sc.nextLine();
        char[] ch = name.toCharArray();

        int uppserCaseCount = 0;
        int lowerCaseCount = 0;

        for (int i = 0; i < ch.length; i++) {
            if (Character.isLowerCase(ch[i])) {
                lowerCaseCount++;
            } else {
                uppserCaseCount++;
            }
        }

        if (lowerCaseCount < uppserCaseCount) {
            name = name.toUpperCase();
            System.out.println(name);
            return;
        }
        name = name.toLowerCase();
        System.out.println(name);
    }
}
