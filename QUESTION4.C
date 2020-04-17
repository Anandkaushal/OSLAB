#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd,n;
char buff[100];
fd=open("anand",O_CREAT|O_RDWR|O_APPEND,0777);
n=read(0,buff,100);
write(fd,buff,n);
lseek(fd,-6,SEEK_END);
read(fd,buff,5);
write(1,buff,5);
printf("\n");
}

