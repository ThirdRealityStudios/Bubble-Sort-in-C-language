#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PRINT_DIGIT_WIDTH 4

int* createList(int size)
{
	return calloc(size, sizeof(int));
}

void initListRandomly(int *list, int size)
{
	int *element = list;

	srand(time(NULL));

	for(int index = 0; index < size; index++)
	{
		list[index] = rand() % 1000;
	}
}

void printList(int *list, int size)
{
	for(int index = 0; index < size; index++)
	{
		printf("[%*d]", PRINT_DIGIT_WIDTH, list[index]);
	}

	puts("");
}