/*
 * Desc.: A simple exploit that tests the write on read-only segments.
*/
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int *ptr;
    ptr = (int *)main;
    ptr[0] = 0xb;
    printf(1, "%x\n", *ptr);

    exit();
}
