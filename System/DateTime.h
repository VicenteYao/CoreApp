typedef struct _DateTime{
    unsigned Year;
    unsigned Month;
    unsigned Day;
    unsigned Hour;
    unsigned Minute;
    unsigned Second;
    unsigned MilliSecond;
}DateTime;

typedef enum DateTimeCompareResult{
    DateTimeCompareResult_Equals;
    DateTimeCompareResult_Before;
    DateTimeCompareResult_After;
};

struct DateTime TimeStampToDateTime(long timeStamp);

long DateTimeToTimeStamp(DateTime datetime);

void DateTimeToString(DateTime datetime,char* format,struct String* pOutString);

struct DateTime Today();

struct DateTime AddYears(struct DateTime dateTime,double years);

struct DateTime AddMonths(struct DateTime dateTime,double months);

struct DateTime AddDays(struct DateTime dateTime,double days);

struct DateTime AddHours(struct DateTime dateTime,double hours);

struct DateTime AddMinutes(struct DateTime dateTime,double minutes);

struct DateTime AddSeconds(struct DateTime dateTime,double seconds);

enum DateTimeCompareResult Compare(struct DateTime datetime1,struct DateTime datetime2);


