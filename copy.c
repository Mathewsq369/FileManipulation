#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int fd, fd2;
    char buffer[20];
    ssize_t bytesRead;

    fd = open(argv[1], O_RDONLY);

    if (fd < 0)
    {
        printf("errno = %d\n", errno);
        perror("main");
        exit(1);
    }

    //read(fd, buffer, 20);

    fd2 = open(argv[2], O_WRONLY| O_CREAT| O_EXCL, 0644);

    if (fd2 < 0)
    {
        printf("errno = %d\n", errno);
        perror("main");
        exit(1);
    }

    while ((bytesRead = read(fd,buffer, 20)) > 0)
    {
        write(fd2, buffer,bytesRead);
    }

    //write(fd2, buffer, 512);
    
    close(fd);
    close(fd2);
    return 0;
}
