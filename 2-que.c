
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int rear=0,front=0;
void insertq(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==front)
printf("que is full");
else
{
rear=r1;
q[rear]=item;
}
}
int deleteq(int *status)
{
if(front==rear)
{
*status=0;
printf("que is empty");
}
else
{
front=(front+1)%SIZE;
*status=1;
return q[front];
}
}
int serchq(int item)
{
int t;
t=front;
t=(t+1)%SIZE;
/*do
{
if(q[t]==item)
return t+1;
t=(t+1)%SIZE;
}
while(t!=rear);*/
while(q[t]!=item && t!=rear);
t=(t+1)%SIZE;
if(q[t]==item)
 return t+1;
else
return 0;
}
void main()
{
int item,opt,ans,status;
do
{
printf("\n1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.exit\n");
printf("option:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("data:");
scanf("%d",&item);
insertq(item);
printf("inserted %d",item);
break;
case 2:
item=deleteq(&status);
if(status==1)
printf("deleted %d",item);
break;
case 3:
printf("number to search:");
scanf("%d",&item);
ans=serchq(item);
if(ans==0)
printf("not found");
else
printf("found at %d position",ans);
break;
case 4:
exit(0);
}
}
while(1);
}













