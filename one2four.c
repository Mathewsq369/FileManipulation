#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int i;
    fork();
    pid_t PID,PPID;
    printf("pid %d\n", PID=getpid());
    printf("ppid %d\n", PPID=getppid());
    for (i = 0; i <= 4; i++)
    {
        printf("%d",i);
    }
    printf("\n\n");
    return 0;
}