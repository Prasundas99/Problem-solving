Base Conversions For Base N
A base N number system has N digits. The process of conversion of N based number to decimal and vice versa is very similar to the binary number system process we just saw.
The only thing that changes is that 2 is replaced by N.
So, if the N based number system representation is An An-1 ... A2 A1 A0, then the corresponding decimal value is

    A0 * N^0 + A1 * N^1 + A2 * N^2 + ... 
The reverse process is also exactly similar. We keep dividing by N, keeping track of the remainders as we go.

Let us say our number is 357, and N = 7.

                1       R0
             ---------
           7 |  7       R2
             ---------
           7 |  51      R0
             ---------
           7 |  357  
Thus the number converts to 1020 in base 7.