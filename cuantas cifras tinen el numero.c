#include<stdio.h>

int main(void){

	char c[100];	int i=0,x=0,d=0;
	printf("ingrese el numero \n");
	gets(c);

	while(c[i]!='\0'){
		if (c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
		x++;
		else
		d++;
		i++;
	}

	printf("la cantidad de digitos  es %d\n",x);

	return 0;

	}






