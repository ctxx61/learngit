#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct number)

struct number
{long num;
struct number *next;
};
int n;

struct number *creat(void)
{struct number *head;
struct number *p1,*p2;
n=0;
p1=p2=(struct number *) malloc(LEN);
scanf("%d", &p1->num);
head=NULL;
while(p1->num!=0)
{n=n+1;
if(n==1)head=p1;
else p2->next=p1;
p2=p1;
p1=(struct number *) malloc(LEN);
scanf("%2d",&p1->num);
}
p2->next=NULL;
return(head);
}

void print(struct number *head)
{
	struct number *p;
	p=head;
	printf("\nthese %d numbers are:",n);
	if(head!=NULL)
		do
		{printf("%5d",p->num);
		p=p->next;
		}while(p!=NULL);
}

insert(struct number *&p1,int i, long e)
{
	int j=0;
	struct number *p2=p1,*s;
	while (j<i-1 && p2!=NULL)
	{j++;
	p2=p2->next;
	}
	if(p2==NULL)
	{
		printf("δ�ҵ���%d���ڵ�!\n",(i-1));
		return 0;
	}
	else
	{
		s=(struct number *)malloc(sizeof(struct number));
		s->num=e;
		s->next=p2->next;
		p2->next=s;
		return 1;
	}
}

Delete(struct number *&p1,int i)  
{
	int j=0;
	struct number *p2=p1,*q;
	while (j<i-1 && p2!=NULL)
	{
		j++;
		p2=p2->next;
	}
	if (p2==NULL)				
		return 0;
	else
	{
		q=p2->next;				
		if (q==NULL) 
			return 0;
		p2->next=q->next;
		free(q);
		return 1;
	}
}

find(struct number *p1,int a)
{struct number *p2;
int i=0;
int j=0;
p2=p1;
while(p2!=NULL)
{i++;
if(p2->num!=a)
p2=p2->next;
else
{printf("�����ҵ������ڵ�%d��λ��.\n",(i-1));
j=1;
p2=p2->next;}
}
if(j!=1)
printf("�����ҵ����ݲ������Ա���.\n");
return 1;
}

main()
{
	struct number *fir;
	int i,n,j;
	long m;
	printf("���������е�Ԫ��:\n");
	fir=creat();
	printf("����Ҫ���ҵ���:\n");
	scanf("%d",i);
		find(fir,i);
		printf("����Ҫɾ������:\n");
		scanf("%d",n);
		Delete(fir,n);
	printf("����Ҫ�����λ�ú���:\n");
	scanf("%3d,%3d",j,m);
		insert(fir,j,m);
		printf("�������:\n");
		print(fir);
		return 0;
}