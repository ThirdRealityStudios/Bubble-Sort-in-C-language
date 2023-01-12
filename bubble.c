#include <stdio.h>
#include <stdlib.h>

#include "help.h"

void sort(int *list, int size)
{
	for(int rounds = 0; rounds < size && size > 1; rounds++)
	{
		for(int index = 0; index < (size - 1); index++)
		{
			// Swap the values if one is bigger.
			if(list[index] > list[index + 1])
			{
				int temp = list[index + 1];

				list[index + 1] = list[index];

				list[index] = temp;
			}
		}
	}
}