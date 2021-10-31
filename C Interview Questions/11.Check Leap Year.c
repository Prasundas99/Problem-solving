//C Program to Check Leap Year
#include <stdio.h>

int main() {
	int year;
	
	scanf("%d", &year);
	
	
	if(year%400 == 0)
	    printf("Leap year");
	else if(year%100 == 0)
	    printf("not a Leap year");
	else if(year % 4 == 0 )
	    printf("Leap year");
	else
	    printf("Not a leap year");
	    
	return 0;
}

