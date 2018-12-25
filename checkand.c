#include<stdio.h>
void display(unsigned int n)
{
static int count =0;
unsigned int i;
for(i=(1<<31);i>0;i>>=1)
{
if(n&i)
printf("1");
else
printf("0");
count++;
if(count%8==0)
printf(" ");
}
}
void check(unsigned int n,unsigned int m)
{
if((n&=(1<<m))==0)
printf("bit is off\n");
else
printf("bit is on\n");

}
void clear(unsigned int n,unsigned int m)
{
n&=~(1<<m);
display(n);
check(n,m);
}
int main()
{
int x,y;
scanf("%d",&x);
printf("bit whant to check =");
scanf("%d",&y);
display(x);
check(x,y);
clear(x,y);
return 0;
}

