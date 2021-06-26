
#include <stdio.h>
#include <cs50.h>
int main(){
    int a=get_int("First number  :");
    int b=get_int("Second number :");
    float Average =(((float)a + (float)b)/2);
    printf("Average of two numbers is %f\n",Average);

}
