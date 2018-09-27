
#include "DateTime.h"

typedef struct _Process {
	struct TimeStamp CreateTime;
	struct TimeStamp ExitTime;
	struct TimeStamp KernelTime;
	struct TimeStamp UserTime;
	
}Process;