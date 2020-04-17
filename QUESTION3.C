#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
int main(void)
{
pid_t pid;
int r;
char buff[1024];
char *cp;
int readpipe[2];
int a;
a=pipe(readpipe);
pid = fork();
if(pid == 0)
{
wait(0);
read(readpipe[0],buff,sizeof(buff));
printf("Message sent to child process: %s",buff);
}
else
{
cp="End term practical";
write(readpipe[1],cp,strlen(cp)+1);
wait(0);
}
return 0;
}

