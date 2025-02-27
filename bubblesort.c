
#include <stdio.h>
void bubblesort(int arr[],int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display(int arr[], int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int array[]={3,5,2,9,1,8,6};
    display(array,7);
    bubblesort(array,7);
    display(array,7);
    return 0;
}
