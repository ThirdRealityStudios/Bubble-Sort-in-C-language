#include <stdio.h>
#include <stdlib.h>

#include "bubble.h"
#include "help.h"

#define SIZE 10

int main(int argc, char **argv)
{
	int *list = createList(SIZE);

	initListRandomly(list, SIZE);

	puts("Unsorted list:");
	printList(list, SIZE);

	sort(list, SIZE);

	puts("Sorted list:");
	printList(list, SIZE);

	free(list);
}
