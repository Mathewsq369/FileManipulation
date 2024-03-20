#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
    int fd;
    fd = open("file1", O_RDONLY);

    if (fd == -1)
    {
        printf("errno = %d\n", errno);
        perror("main");
        //exit(1);
    }

    fd = open("coding", O_WRONLY);

    if(fd == -1)
    {
        printf("errno = %d\n", errno);
        perror("main");
        exit(1);
        perror("main");
    }
    return 0;
}