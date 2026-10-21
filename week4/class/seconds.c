// convert seconds to h m s
// 3601 >>> 1 hour 0 min 1 sec

#include <stdio.h>

#define SEC_PER_HOUR 3600
#define SEC_PER_MINUTE 60

int main()
{
    unsigned short seconds, minutes, hours, secs_left, mins_left;
    printf("Enter number of seconds (<65535): ");
    scanf("%hd", &seconds);
    // Mod %
    hours = seconds / SEC_PER_HOUR;
    minutes = seconds / SEC_PER_MINUTE;
    mins_left = minutes % SEC_PER_MINUTE; // 2. yol min_left = minutes - hours*SEC_PER_MINUTE
    secs_left = seconds % SEC_PER_MINUTE;

    printf("%u seconds is equal to ", seconds);
    printf("%u h, %u m, %u s\n", hours, mins_left, secs_left);

    return 0;
}