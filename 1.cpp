#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct number)

struct number
{int num;
struct number *next;
};
int n;
struct number *creat(void)
{struct *head;
struct *p1,*p2;
n=0;
p1=p2=(struct number *) malloc(LEN);
scanf("%2d", &p1->num);
head=NULL;
while(p1->number!=0)
{n=n+1;
if(n==1)head=p1;
else p2->next=p1;
p2=p1;
p1=(struct number *) nalloc(LEN);
scanf("%2d",&p1->num);
}
p2->next=NULL;
return(head);
}
int main()
{
	struct number * fir;
		fir=creat(2012);
		printf("%2d",fir->num);
		return 0;
}