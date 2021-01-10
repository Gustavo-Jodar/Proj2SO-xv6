#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[])
{

    struct rtcdate r;

    if (date(&r) == 0)
    {
        printf(2, "Date failed\n");
        exit();
    }

    // your code to print the time in any format you like...
    printf(1, "%d/%d/%d - %d:%d:%d\n", r.day, r.month, r.year, r.hour, r.minute, r.second);

    exit();
}