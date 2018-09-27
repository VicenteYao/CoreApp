
typedef struct _MemoryStream {
	int unused;
}MemoryStream;


struct MemeryStream* MemeryStream_Alloc(unsigned size);

void MemeryStream_Dealloc(struct MemeryStream* pMemoryStream);

struct MemeryStream* MemeryStream_Realloc(struct MemeryStream* pMemoryStream, unsigned newSize);

unsigned MemeryStream_Read(struct MemeryStream* pMemoryStream, void* pOutBuffer, unsigned offset, unsigned length);

unsigned MemeryStream_Write(struct MemeryStream* pMemoryStream, void* pOutBuffer, unsigned offset, unsigned length);

char MemeryStream_Read(struct MemeryStream* pMemoryStream);

unsigned MemeryStream_CanRead(struct MemeryStream* pMemoryStream);

unsigned MemeryStream_CanWrite(struct MemeryStream* pMemoryStream);

unsigned MemeryStream_GetPosition(struct MemeryStream* pMemoryStream);

void MemeryStream_SetPosition(struct MemeryStream* pMemoryStream, unsigned position);