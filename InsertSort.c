#include<stdio.h>
int main()
{
	int size=0,i=0,j=0,key=0;
	printf("entre the size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("entre the elements in array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}

	printf("your array brfore sorting\t");
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}

	for(j=1;j<size;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1]=key;
	}

	printf("\narray after sorting\t");

	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}
