#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main()
{
        // creates objects heap and k from heap.cpp
        struct HEAP heap;
        struct ELEMENT k;

	heap = Initilize(10);
	int arr[10] = {2, 4, 11, 8, 10, 49, 17, 250, 13, 32};
	BuildHeap(&heap, arr, 10);
	
	printf("\nInsert: 50\n");
	Insert(&heap, 50);
	printf("\n");

	printf("before\n");
	PrintHeap(heap);
	IncreaseKey(&heap, 5, 12);
	printf("from 11 to 12\n");
	PrintHeap(heap);
	IncreaseKey(&heap, 5, 50);
	printf("from 12 to 50\n");
	PrintHeap(heap);
	IncreaseKey(&heap, 9, 33);
	printf("from 2 to 33\n");
	PrintHeap(heap); 

	printf("\n\nChanging keys done; Deletion\n\n");

	while(heap.size > 2)
	{
		int max = DeleteMax(&heap);
        	printf("\n");
		PrintHeap(heap);
        	printf("%d\n", max);
	}

	printf("\n\nDeletion done, Insertion\n\n");
	
	PrintHeap(heap);
	printf("Insert: 7\n");
	Insert(&heap, 7);
	PrintHeap(heap);
	Insert(&heap, 400);
	printf("Insert: 400\n");
	PrintHeap(heap);

}


