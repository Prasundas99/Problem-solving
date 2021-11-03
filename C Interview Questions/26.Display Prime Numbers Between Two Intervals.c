//    C Program to Display Prime Numbers Between Two Intervals

#include <stdio.h>

int main(void) {
	int range_start, range_end;
	
	printf("Enter Range (2 numbers)\n");
	scanf("%d %d", &range_start, &range_end);
	
	int i;
	
	for(i=range_start ; i<range_end+1; i++){
	    int m = i/2, j, flag = 0;
	    for(j = 2; j<=m;j++){
	        if(i%j == 0){
	          break;
	        }else{
	           flag++;
	            
	        }
	    }
        if(flag != 0){
            printf("%d is a prime \n", i);
        }
	}
	return 0;
}

