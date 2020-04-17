#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void* fun(void* arg)
{
int *a=(int *)arg;
int mul=1;
for(int i=0;i<2;i++)
{
mul=mul*a[i];
}
printf("mul of numbers is :%d\n",mul);
}

int main()
{
pthread_t p;
int n1,n2;
printf("Enter the first number: ");
scanf("%d",&n1);
printf("Enter the second number: ");
scanf("%d",&n2);
int a[]={n1,n2};
pthread_create(&p,NULL,fun,(void*)a);
pthread_join(p,NULL);
}

