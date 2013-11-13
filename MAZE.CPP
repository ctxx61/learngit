#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define H 20
#define L 21


	FILE *p;
	char maze[H][L];
const int dir1[4]={1,0,-1,0},
	      dir2[4]={0,1,0,-1};
	int i,j,x,y;

main()
{void pr(void);
    void dir(int i,int j);
	if((p=fopen("h:\\maze.txt","r"))==NULL)
        {
                printf("打不开文件");
                        exit(0);
        }
		for(i=0;i<H;i++)
	{
			for(j=0;j<L;j++)
		{
			fscanf(p,"%c",&maze[i][j]);
		if(maze[i][j]=='S')
		{
			x=i;
		    y=j;
		}
		}
		}
		dir(x,y);
		return 0;
}
void pr(void)
{
	for(i=0;i<H;i++)
	{
		for(j=0;j<L;j++)
		{
			printf("%c",maze[i][j]);
		}
	}
}
void dir(int x,int y)
{
	int k;
	if(maze[i][j]!='E')
	{ 
		for(k=0;k<4;k++)
		if(x +dir1[k]>=0 && y+dir1[k]<L && x+dir2[k]>=0  && y+dir2[k]<L && maze[x+dir1[k]][y+dir2[k]]=='.')
		{maze[x+dir1[k]][y+dir2[k]]='@';
			pr();
				Sleep(100);
				 system("cls");
				dir(x+dir1[k],y+dir2[k]);

}
} 
}
