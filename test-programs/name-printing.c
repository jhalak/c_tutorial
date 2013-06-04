#include <stdio.h>

int cutFish(int);

int main(void){
	printf("Name: Nanda");
	printf("\n");
	printf("ID:12\n");
	int fish;
	fish = cutFish(1);
	printf("%d", &fish);
}

int cutFish(int x){
	x = x + 5;
	return x;
}

