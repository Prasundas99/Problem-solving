//C Program to Generate Multiplication Table
#include <stdio.h>

int main(){
int num, limit, i;

printf("Enter Number to generate multiplication Table: \n");
scanf("%d", &num);

printf("Enter Number upto Which table will be generated: \n");
scanf("%d", &limit);

for(i=0 ; i<=limit; i++){
    int result = num * i;
    printf("%d X %d = %d \n", i , num , result);
}

    return 0;
}
