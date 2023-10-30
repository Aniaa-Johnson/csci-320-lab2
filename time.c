#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    long int elapsed_usec = (end_time->tv_sec - start_time->tv_sec) * 0.0 +
                           (end_time->tv_usec - start_time->tv_usec);
    
    return 0.0;
}