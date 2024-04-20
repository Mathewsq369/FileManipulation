#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t PID,PPID;
    printf("My pid is %d\n\n", (PID=getpid()));
    printf("My product pid is %d\n\n", (PPID=getppid()));
    return 0;
}