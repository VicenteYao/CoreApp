typedef struct _String {
	unsigned Length;
	char Characters[0];
}String;

struct String* AllocString(char* pCharacters);

void DeallocString(struct String* pString);

struct String* AppendString(struct String* pString1, struct String* pString2);

bool CompareString(struct String* pString1, struct String* pString2);

unsigned GetStringLength(struct String* pString1);

char GetCharAt(struct String* pString1, unsigned index);

void SetCharAt(struct String* pString1, unsigned index, char value);
