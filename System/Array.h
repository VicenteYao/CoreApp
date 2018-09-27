typedef struct _Array
{
	unsigned  Length;
	unsigned ElementSize;
	void* Value[0];
}Array;

void* Array_GetElement(struct Array * pArray);

void Array_SetElement(struct Array * pArray, unsigned index, void* pValue);

unsigned Array_GetLength(struct Array * pArray);

void Array_Copy(struct Array* pSrc, unsigned srcOffset, struct Array* pDest, unsigned destOffset, unsigned count);

struct Array* Array_Alloc(unsigned elementSize, unsigned arrayLength);

void Array_Dealloc(struct Array* pArray);

struct Array* Array_Realloc(struct Array* pArray, unsigned newSize);

