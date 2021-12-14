//Check Pallindrome
#include <iostream>
using namespace std;

int isPalindrome(int num){
    if(num == reverse(num))
        return 1;
    return 0;
}

//approach 1
int reverse(int num){
    int rem;
    static int sum = 0;
    if(num != 0){
        rem = num%10;
        sum = sum*10+rem;
        reverse(num/10);
    }
    else
        return sum;
}

//Approach 2
int reverse2(int num)
{
    /* Find number of digits in num */
    int digit = (int)log10(num);
    
    /* Recursion base condition */
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}





int main() {
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("the given number is not a palindrome number");
    }
    return 0;
}
