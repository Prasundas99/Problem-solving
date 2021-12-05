# Binary Number System
Unary, where we just write 1, 11, 111… just goes on forever. Binary, with two options (1 and 0) looks like this:

    1: 1
    2: 10 (we’re full – tick over)
    3: 11
    4: 100 (we’re full again – tick over)
    5: 101
    6: 110
    7: 111
    8: 1000 (tick over again)
and so on …

Now, how do we convert an arbitrary binary number to its decimal equivalent? Obviously counting and matching is not an option.

Let us first look at the value of 10000...n times ( 1 followed by n 0s ):

This number will only come after we have tried all possible n digit numbers in the binary system which has:

      2 * 2 * 2 * .. n times possibilities  ( every position can either have 0 or 1 ) 
   =  2^n possibility which covers numbers from 0 to 2^n - 1.
So, the value of 1000..n times = 2n.

Now any number like 1010110 can be expressed as 1000000 + 10000 + 100 + 10 = 2^6 + 2^4 + 2^2 + 2^1.

Hence, if the binary representation is An An-1 An-2 ... A1 A0, then the corresponding value is

A0 * 2^0 + A1 * 2^1 + A2 * 2^2 + .... + An * 2^n
Now look at the reverse process. Which is given a decimal number N, how do we convert it to binary.
To do this conversion, we need to divide repeatedly by 2, keeping track of the remainders as we go. Watch below:
Let us say our number is 357.

Number conversion to binary:

![TFB2qnl](https://user-images.githubusercontent.com/58937669/144742048-c03c2001-3cf0-4287-b672-b86434b5c970.gif)


Thus the number converts to 101100101
