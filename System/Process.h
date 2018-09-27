
#include "Time.h"
#include "String.h"

typedef struct _UserProcessParameters {
	struct String ImagePathName;
	struct String CommandLine;
}UserProcessParameters;

typedef struct _Process {
	unsigned ProcessId;
	struct Process* ParentProcess;
	char ProcessName[64];
	struct TimeStamp CreateTime;
	struct TimeStamp ExitTime;
	struct TimeStamp KernelTime;
	struct TimeStamp UserTime;
	struct UserProcessParameters* Parameters;
	
}Process;


void* CreateProcess(const char* pImagePathName, char* pCommandLine);

bool GetProcessTimes(unsigned processId,
	const struct TimeStamp* pOutCreateTime,
	const	struct TimeStamp* ExitTime,
	const struct TimeStamp* KernelTime,
	const struct TimeStamp* UserTime,
	);

