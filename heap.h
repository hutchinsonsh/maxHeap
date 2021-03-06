
// heap.h file
// functions/structures in heap.cpp

typedef struct ELEMENT ELEMENT;
typedef struct HEAP HEAP;

struct ELEMENT		//in heap- each element is a struct
{
	int value;
};

struct HEAP		//heap stored as struct
{
	int capacity;
	int size;
	struct ELEMENT* H;
};

HEAP Initilize(int n);				// creates heap struct
void Heapify(HEAP *heap, int n);		// maintains heap property
void BuildHeap(HEAP *heap, int arr[], int n);	// creates heap from array
void Insert(HEAP *heap, int value);		// inserts new element/maintains heap order
int DeleteMax(HEAP *heap);			// deletes/returns max value
void IncreaseKey(HEAP *heap, int index, int value);	// increases value at index/maintains order
void PrintHeap(HEAP heap);




	
