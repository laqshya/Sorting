#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maxsubarr(int arr[],int n)
{
    int i,j,maxsum=INT_MIN;

    for(i=0;i<n;i++)
    {
        int subsum=0;

        for(j=i;j<n;j++)
        {
            subsum += arr[j];

            if(maxsum<subsum)
            {
                maxsum = subsum;
            }
        }
    }
    return maxsum;
}

int main()
{
    int i,size=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array\n");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }


    int a=maxsubarr(arr,size);
    printf("maximum sum:%d",a);
    return 0;
}
