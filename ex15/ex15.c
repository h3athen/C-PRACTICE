#include<stdio.h>

int main(int arrgc, char *argv[]){
	// Creating two array we care about
	int ages[] = { 23, 43, 12, 89, 2 };
	char *names[] = {
		"Alan", "Frank",
		"Marry", "John", "Lisa"
	};

	// Safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	printf("---using index\n");
	printf("--------\n");
	// first way using indexing
	for(i=0; i<count; i++){
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("\n");
	printf("---first pointer type\n");
	printf("--------\n");
	// set up the pointer to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers
	for(i=0; i<count; i++){
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}
	
	printf("\n");
	printf("---second pointer type\n");
	printf("--------\n");
	// third way, pointers and just arrays
	for(i=0; i<count; i++){
		printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
	}

	printf("\n");
	printf("---third pointer type\n");
	printf("--------\n");
	// forth way with pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; (cur_age-ages) < count;
			cur_name++, cur_age++){
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}

	return 0;
}
