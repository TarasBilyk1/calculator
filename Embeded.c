#include <stdio.h>

void main(){

	int a ,b ,r ;
	char simbol;

	printf("Write you number  \n");
	scanf_s(" %d %d", &a, &b);
	scanf_s(" %c",&simbol, 1);

	switch (simbol){
	case '+':
		printf(" You res %d ", r = a + b );
		break;
	case '-':
		printf(" You res %d ", r = a - b);
		break;
	case '*':
		printf(" You res %d ", r = a * b);
		break;
	case '/':
		printf(" You res %d ", r = a / b);
		break;
	default:
		printf( " You doesn`t entered simbol ! " );
		break;
	}
	
	return 0 ;
}
