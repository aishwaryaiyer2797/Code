/*#include<stdio.h>
#pragma startup fun1 100
#pragma startup fun2 121

void fun1()
{
	printf("func 1");
}
void fun2()
{
	printf("func2");
}
void main()
{	printf("main");
}*/

#include<stdio.h>

void School();
void College() ;

#pragma startup School 105
#pragma startup College
#pragma exit College
#pragma exit School 105

void main(){
printf("\nI am in main");

}

void School(){
printf("\nI am in School");

}

void College(){
printf("\nI am in College");

}
