//Check Whether a Character is a Vowel or Consonant
#include <iostream>
using namespace std;

int main() {
	char ch;
	scanf("%c", &ch);
	
	printf("The Character you entered is : %c \n", ch);
	
	if(isalpha(ch)){
    	if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U')
    	    printf("Vowel");
    	else
    	    printf("Consonant");
	}else
	    printf("Not a Character!");
	
	return 0;
}
