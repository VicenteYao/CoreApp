typedef struct _String {
	unsigned Length;
	char Characters[0];
}String;

struct String* String_Alloc(char* pCharacters);

void String_Dealloc(struct String* pString);

struct String* String_Append(struct String* pString1, struct String* pString2);

bool String_Compare(struct String* pString1, struct String* pString2);

unsigned String_GetLength(struct String* pString1);

char String_GetCharAt(struct String* pString1, unsigned index);

void String_SetCharAt(struct String* pString1, unsigned index, char value);