#include <stdio.h>

void main() 
{
    int prev,cur,next,count,flow;
    printf("Enter count\n");
    scanf("%d",&count);
    prev=cur=1;
    printf("%d %d ",prev,cur);
    flow=1;
    while(flow<=(count-2))
    {
     next=prev+cur;
     printf("%d ",next);
     prev=cur;
     cur=next;
     flow+=1;
    }
    return 0;
}
