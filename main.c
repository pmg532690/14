#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];
};

int main(void) {
	 struct Book *p;
	 
	 p = (struct Book*)malloc(sizeof(struct Book) * 2);
	 
	 if (p == NULL){
	 	printf("메모리 할당 오류\n");
	 	return;
	 }
	 
	p -> number = 1;
	strcpy(p->title, "C programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	printf("1st Book : %s\n", p->title);
	printf("2nd Book : %s\n", (p+1)-> title);
	
	free(p);

	return;
}
