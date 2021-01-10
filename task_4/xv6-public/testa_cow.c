#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char const *argv[])
{
    int pid = cow();

    if (pid == 0)
    {
        printf(1, "Estou no processo filho! :)\n");
    }
    else
    {
        printf(1, "Estou no processo pai! ;)\n");
        wait();
    }

    exit();
}