//C Program to Find the Largest Number Among Three Numbers
#include <stdio.h>

int main(void) {
	int a,b,c;
	
	scanf("%d %d %d", &a,&b,&c);
	
	printf("Entered numbers are \n%d  \n%d \n%d \n", a,b,c);
	
	
	if(a>b && a>c)
	    printf("%d is greatest", a);
	else if(b>a && b>c)
	     printf("%d is greatest", b);
	else
	     printf("%d is greatest", c);     
	return 0;
}

