#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
void main()
{
FILE *p;
	char array[100][12];
int i=0,j;
char t[12],m[12];
if((p=fopen("h:\\rand100.txt","r"))==NULL)
        {
                printf("�򲻿��ļ�");
                        exit(0);
        }
        while((fgets(array[i++],12,p))!=NULL);
		fclose(p);
//��������ʼ
for(i=1;i<100;i++)//Ĭ���±�Ϊ0���Ѿ�������õģ����Դ�1��ʼ
{
strcpy(t,array[i]);
j=i;
while((j>0)&&(strcmp(array[j-1],t))>0)//���ǰ����������󽻻�֮
{
strcpy(m,array[j-1]);
strcpy(array[j-1],array[j]);
strcpy(array[j],m);
j--;
}
}

for(i=0;i<100;i++)
{
printf("%s",array[i]);
}
}