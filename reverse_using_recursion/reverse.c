/*
 
Reversing a sentence using resursion functionality in C

 */

#include <stdio.h>

void ReverseSentence();

int main(void){
	printf("Enter a sentence: ");
	ReverseSentence();

}

void ReverseSentence(){
	char ch;
	scanf("%c", &ch);
	if(ch != '\n'){
		ReverseSentence();
		printf("%c",ch);
	}
}
