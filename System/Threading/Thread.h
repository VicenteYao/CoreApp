#include "DateTime"
#include "../String.h"
#include "../Array.h"
#include "../Objects/Object.h"

typedef enum _ThreadPriority {
    ThreadPriority_Highest,
    ThreadPriority_High,
    ThreadPriority_Normal,
    ThreadPriority_Low,
    ThreadPriority_Lowest,
}ThreadPriority;

typedef struct _ThreadInfomation {
	unsigned ID;
    enum ThreadPriority ThreadPriority;
    char ThreadName[64];
	void* ThreadLocalStorages[64];
    unsigned ThreadLocalStoragesCount;
    unsigned StackLimitLow,
    unsigned StackLimitHigh,
    unsigned SleepTime;
	struct TimeStamp CreateTime;
	struct TimeStamp ExitTime;
	struct TimeStamp KernelTime;
	struct TimeStamp UserTime;
}ThreadInfomation;

typedef struct _ThreadContext{
    
    
}ThreadContext;


typedef  int (*ThreadProc)(void* lParam);


unsigned GetCurrentThreadId();

Handle GetCurrentThread();

unsigned GetThreads(const struct Array* pOutIdOfThreads);

struct Handle GetThreadOfId(unsigned threadId);

void SetThreadPriority(Handle hThread,enum ThreadPriority threadPriority);

enum ThreadPriority GetThreadPriority(Handle hThread);

unsigned TlsAlloc();

void TlsFree(unsigned tlsIndex);

void TlsSetValue(unsigned tlsIndex, void* pValue);

void* TlsGetValue(unsigned tlsIndex);

void Sleep(unsigned milliSeconds);

Handle  CreateThread(unsigned stackSize, ThreadProc threadProc, void* lParam, const unsigned* pOutThreadId);

void SetThreadName(Handle hThread,const char* pThreadName);

char* GetThreadName(Handle hThread);

bool GetThreadContext(Handle hThread,const ThreadContext* pOutThreadContext);

bool SetThreadContext(Handle hThread,const ThreadContext* pInThreadContext);

int SuspendThread(Handle hThread);

int ResumeThread(Handle hThread);

void ExitThread(int exitCode);

void TerminalThread(Handle hThread);

void YieldThread();

bool GetThreadTimes(Handle hThread,
	const struct TimeStamp* pCreateTime,
	const struct TimeStamp* pExitTime,
	const struct TimeStamp* pKernelTime,
	const struct TimeStamp* pUserTime);



