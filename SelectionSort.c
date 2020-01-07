#include <stdio.h>
#include <stdlib.h>


void print(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
    printf("%d\t",arr[i]);
    }
}

int main()
{
    int size=0,i=0,j=0,key=0,temp=0,arr[size];
    printf("Entre the size of array\n");
    scanf("%d",&size);
    printf("Entre the elements in array: ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ärray before sorting\t");

    print(arr,size);

    for(j=0 ; j<size; j++)
    {
        key = arr[j];
        for(i=j+1; i<size; i++)
        {
            if(arr[i]<key)
            {
                temp=arr[j];
                key = arr[i];
                arr[j] = key;
                arr[i] = temp;
            }
        }
    }

    printf("ärray after selection sort\t");

    print(arr,size);
    return 0;
}
