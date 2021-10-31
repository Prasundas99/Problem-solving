//C Program to Find the Roots of a Quadratic Equation
#include <stdio.h>

int main(void) {
    int a,b,c;
    double result;
    
    printf("Enter coefficient of ax^2+bx+c");
    scanf("%d %d %d", &a,&b,&c);
    
    double discrimenant = b*b - (4*a*c);
    
    // condition for real and different roots
    if(discrimenant>0){
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("roots are real and different \n result is: %d aand %d", root1, root2);
    }
    
    
    // condition for real and equal roots
    if(discrimenant == 0){
        result = -b/2a;
        printf("roots are equal and result is: %d", result);
    }
    
    
    // if roots are not real
    if(discrimenant<0){
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
    
        printf("Roots are imaginary");
        
    }
	return 0;
}

