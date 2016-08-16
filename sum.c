#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if((s[i]+s[j])==0)
			{
			printf("%d\t%d\n",s[i],s[j]);	
			}
			
		}
	}
	return 0;
}
