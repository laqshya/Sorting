#include<stdio.h>

void Merge(int arr[], int f,int m,int l)
{
    int a= m-f+1;
    int b = l-m;
    int L[a],R[b];
    int i;

    for(i=0;i<a;i++)
    {
        L[i] = arr[f+i];
    }

    for(i=0;i<b;i++)
    {
        R[i] = arr[m+1+i];
    }

    i=0;

    int j=0,k=f;

    while(i<a && j<b)
    {
        if(L[i] <=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<a)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<b)
    {
        arr[k] =R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int f, int l)
{
    if(f<l)
    {
        int m = (f+l)/2;

        MergeSort(arr, f, m);

        MergeSort(arr,m+1,l);

        Merge(arr,f,m,l);

    }
}

void print(int arr[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int i,size=0;

    printf("Entre the size of array\n");
    scanf("%d",&size);

    int arr[size];

    printf("Entre the elements in array\n");

    for(i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("Array before sorting:\t");

    print(arr,size);

    MergeSort(arr,0,size-1);

    printf("Array after sorting:\t");
    print(arr,size);

    return 0;
}
