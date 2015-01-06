/****************************************
  > File Name:     t4.c
  > Author:        guqiang
  > Mail:          544104926@qq.com
  > Created Time:  2014年10月05日 星期日 22时56分34秒
  > Function:      把某位换为v
*****************************************/

#include<stdio.h>

/**************************************
 * name:           int rm(int a, int p, int v)
 * Description:    替换
 * calls:          no
 * called by:      main
 * input:          a, v, p
 * output:         no
 * return:         0
***************************************/
int rm(int a, int p, int v)
{    
    int i;

    i = 0;

    if(v)                              //开始替换
	{
		a = a | (1 << p);
	}
	else
	{
		a = a & ( ~(1 << p));
	}
    
    for(i = 0; i < 32; i++)
	{
		printf("%d",(a >> (31 - i)) % 2);
		if(i == 31)
		{
			printf("\n");
		}

	}

	return 0;
}

int main()
{
	int a;
    int p;
    int v;

	printf("please enter an a:\n");
	scanf("%d",&a);
	printf("please enter a p:\n");
	scanf("%d",&p);
	printf("please enter a v:\n");
	scanf("%d",&v);

    rm(a,p,v);

    return 0;
}
