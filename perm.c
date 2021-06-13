#include <stdio.h>
#include <cs50.h>

string swap(string a,int p,int k);
int len(string a);
	
int main(void){
	char s[]="ABC";
	for (int i=0;i<len(s);i++){
		for (int j=0;j<len(s);j++){
		   swap(s,i,j);
		   printf("%s ",s);
		}
	
	}
	printf("\n");
	}



int len(string a){
	int c=0;
	while(a[c] != '\0')
	{c++;}
	return c;
	}
string swap(string a,int p,int k){
	string d= a;
	char b,c;
	b=a[p];
	c=a[k];
	a[k]=b;
	a[p]=c;
	
	return d;
	}
