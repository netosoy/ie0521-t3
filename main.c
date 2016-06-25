#include <stdio.h>

int function(int a, int b, int c, int d, int e, int f, int g);

int main(){
	int result = function(3,1,7,2,1,6,3);
	printf("The result of the function is %i\n", result);
}

int function(int a, int b, int c, int d, int e, int f, int g){
	if(g>4 ){
		return (a+b+c+d-e-f);
	}else{
		return (a+b+c+d+e-f);
	}
}