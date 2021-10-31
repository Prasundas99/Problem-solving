//    C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>


int main(){
int num;

scanf("%d", &num);
if(isalpha(num)){
    printf("Character");
}else{
    printf("Not a Number");
}


return 0;
}