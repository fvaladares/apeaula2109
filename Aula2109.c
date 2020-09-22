/*
 ============================================================================
 Name        : Aula2109.c
 Author      : Fabricio Valadares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void exemploWhile() {
	int count = 0;

	while (count < 30) {
		printf("%d -- Bom dia!\n", count+1);
		count++;
	}
}

int exemploFor(){

	int count;

	for (count = 1; count <= 20; count++) {
		printf("%i, ", count);
	}

	return count;
}



int main(void) {

//	exemploWhile();

	int result = exemploFor();

	printf("\n\nFim do exemplo %d\n\n", result);

	return EXIT_SUCCESS;
}
