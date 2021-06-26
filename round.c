#include <stdio.h>
#include <cs50.h>

int roundin(float);
int main(){
	float a=get_float("Enter the number : ");
	printf("Rounded number is : %i\n",roundin(a));
		}





int roundin(float a){
	int b=a;
	float c=(float)a-b;
	if(c>0.5){
	return b+1;}
	else {
	return b;}
	}	


