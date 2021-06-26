#include <stdio.h>
#include <cs50.h>




int
main(void){

int a=10;
int *p;
char *s="hello world";
p=&a;
printf("adress of a is : %p\n",s);
printf("value of a is  : %c\n",*s);
	for (int i=0;*(s+i)!= '\0';i++){
	printf("address of %c is : %p\n",*(s+i),s+i);
	}
	printf("\n");
	

}
