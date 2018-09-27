
#include "../String.h"
#include "../Array.h"

typedef enum _ThreadPriority {
    ThreadPriority_Highest;
    ThreadPriority_High;
    ThreadPriority_Normal;
    ThreadPriority_Low;
    ThreadPriority_Lowest;
}ThreadPriority;

typedef struct _Thread {
	unsigned ID;
    enum ThreadPriority ThreadPriority;
    char ThreadName[64];
    void* ThreadLocalStorages;
    unsigned ThreadLocalStoragesCount;
    unsigned StackLimitLow,
    unsigned StackLimitHigh,
    unsigned SleepTime;
}Thread;

typedef struct _ThreadContext{
    
    
}ThreadContext;


typedef  int (*ThreadProc)(void* lParam);


unsigned GetCurrentThreadId();

struct Thread* GetCurrentThread();

unsigned GetThreads(const struct Array* pOutIdOfThreads);

struct Thread* GetThreadOfId(unsigned threadId);

void SetThreadPriority(unsigned threadId,enum ThreadPriority threadPriority);

enum ThreadPriority GetThreadPriority(unsigned threadId);

unsigned TlsAlloc();

void TlsFree(unsigned tlsIndex);

void TlsSetValue(unsigned tlsIndex,void* pValue);

void* TlsGetValue(unsigned tlsIndex);

void Sleep(unsigned ms);

unsigned  CreateThread(unsigned stackSize,ThreadProc threadProc,void* lParam);

void SetThreadName(unsigned threadId,const char* pThreadName);

char* GetThreadName(unsigned threadId);

bool GetThreadContext(unsigned threadId,const ThreadContext* pOutThreadContext);

bool SetThreadContext(unsigned threadId,const ThreadContext* pInThreadContext);

int SuspendThread(unsigned threadId);

int ResumeThread(unsigned threadId);

void ExitThread(int exitCode);

void TerminalThread(unsigned threadId);

void YieldThread();



