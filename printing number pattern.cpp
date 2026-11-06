/*write a c program to print
12345
1234
123
12
1    */
#include<stdio.h>
  int main()
  {
  	int n,i,j,k;
  	printf("enter any number:");
  	scanf ("%d",&n);
  	k=n;
  	for(i=1;i<=n;i++)
  	{
  		for(j=1;j<=k;j++)
  		{
  			printf("%d",j);
	    }
		  printf("\n");
		  k--;
	  }
	  return 0;
  }
