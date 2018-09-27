typedef struct _Array
{
	unsigned  Length;
	unsigned ElementSize;
	void* Value[0];
}Array;

void* GetArrayElement(struct Array * pArray);

void SetArrayElement(struct Array * pArray, unsigned index, void* pValue);

unsigned GetArrayLength(struct Array * pArray);

void CopyArray(struct Array* pSrc, unsigned srcOffset, struct Array* pDest, unsigned destOffset, unsigned count);

struct Array* AllocArray(unsigned elementSize, unsigned arrayLength);

void DeallocArray(struct Array* pArray);

struct Array* ReallocArray(struct Array* pArray, unsigned newSize);

