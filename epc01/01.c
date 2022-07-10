#include <stdio.h>
#include <string.h>
int main(){
	char name[20];//string
	printf("Ola eu sou o N 1, como e seu nome?\n");	
	gets(name);//get string "gets(name);" ou "scanf("%s", name);"
	printf("Bem-vindo ao clube %s\n", name);
	return 0;
}