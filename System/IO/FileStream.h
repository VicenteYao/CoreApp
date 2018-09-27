#include "String.h"
typedef struct _FileStream {
	unsigned unused;
}FileStream;

struct FileStream* FileStream_Alloc(struct String* pFileName);

void FileStream_Dealloc(struct FileStream* pFileStream);

struct FileStream* FileStream_Realloc(struct FileStream* pFileStream, unsigned newSize);

unsigned FileStream_Read(struct FileStream* pFileStream, void* pOutBuffer, unsigned offset, unsigned length);

unsigned FileStream_Write(struct FileStream* pFileStream, void* pOutBuffer, unsigned offset, unsigned length);

char FileStream_Read(struct FileStream* pFileStream);

unsigned FileStream_CanRead(struct FileStream* pFileStream);

unsigned FileStream_CanWrite(struct FileStream* pFileStream);

unsigned FileStream_GetPosition(struct FileStream* pFileStream);

void FileStream_SetPosition(struct FileStream* pFileStream, unsigned position);