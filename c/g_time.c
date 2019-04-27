#include "g_time.h"

#include <stdio.h>
#include <time.h>
#include <sys/time.h>

void get_timestamp(char * const str){
    struct timeval tv;
    struct tm tm_time;
    gettimeofday(&tv, NULL);
    gmtime_r(&tv.tv_sec, &tm_time);

    long mseconds, useconds;
    mseconds = tv.tv_usec / 1000;
    useconds = tv.tv_usec % 1000;
    sprintf(str, "%d/%d/%d %d:%d:%d:%ld:%ld", \
            tm_time.tm_year, tm_time.tm_mon, tm_time.tm_mday, \
            tm_time.tm_hour, tm_time.tm_min, tm_time.tm_sec, \
            mseconds, useconds);
}
