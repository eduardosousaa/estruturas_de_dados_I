#include <stdio.h>

int recursiva(int x, int y){
	if (y == 0){
		return 1;
	} else {
		return x * recursiva(x, y-1);
	}
	
}

int main(){
	int x, y, r;
	scanf("%d", &x);
	scanf("%d", &y);
	r = recursiva(x,y);
	printf("Resultado %d\n", r);
	
	return 0;
}
