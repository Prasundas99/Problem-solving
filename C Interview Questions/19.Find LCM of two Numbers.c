//Find LCM of two Numbers
#include <stdio.h>

int main(void) {
	int n1 , n2;
    printf("Enter 2 number to find LCM between them");
    scanf("%d %d", &n1, &n2);
    int max =  (n1>n2)? n1 : n2;
    int i, LCM = 0;
    while(1){
        printf("%d", max);
        if(max%n1 == 0 && max%n2 == 0){
            printf("Satisfy \n");
            LCM = max;
            break;
        }
        max++;
    }
	
	printf("\n LCM is %d", LCM);
	return 0;
}

