#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

int maxsubarr(int arr[],int n)
{
    int max_max = arr[0];
    int part_max = arr[0];
    int i;

    for(i=0; i<n; i++)
    {
        if(part_max < part_max+arr[i])
        {
            part_max += arr[i];
        }
        else
        {
            part_max = arr[i];
        }

        if(max_max < part_max)
        {
            max_max = part_max;
        }
    }
    return max_max;

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
    return 0;
}
