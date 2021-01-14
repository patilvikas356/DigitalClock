#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main()
{

    struct tm currentTime;
    printf("\e[?25l");

    while (1)
    {
        time_t timeS = time(NULL);
        localtime_r(&timeS, &currentTime);
        printf("%i:%i:%i \r", currentTime.tm_hour, currentTime.tm_min, currentTime.tm_sec);
        fflush(stdout);
        sleep(1);
    }
}

   