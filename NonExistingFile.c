#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
    int fd, fd2;
    char buffer[512];

    fd = open(argv[1], O_RDONLY);
    struct stat fileStat;
    off_t filesSize = fileStat.st_size;
    stat (argv[1],&fileStat);

    if (fd < 0)
    {
        printf("errno = %d\n", errno);
        perror("main");
        exit(1);
    }

    read(fd, buffer, 512);

    fd2 = open(argv[2], O_WRONLY);

    if (fd2 < 0)
    {
        creat(argv[2], 0644);
        fd2 = open(argv[2], O_WRONLY);
        write(fd2, buffer, 512);
        close(fd2);
    }
    else
    {
        printf("The file or folder already exists\n");
    }
    return 0;
}
