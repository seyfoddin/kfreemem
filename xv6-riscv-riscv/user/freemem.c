#include "kernel/types.h"

#include "kernel/stat.h"

#include "user/user.h"



int
main(int argc, char *argv[])
{

    printf("the amount of free memory user: %d\n", freemem());

    exit(0);

}