#include <stdio.h>
#include <stdlib.h>
#define size 100
int a[size],count=0;
void selectionsort(int a[size],int n)
{
   int i,j,temp,min=0;
   for(i=0;i<=n-2;i++)
    {
        min=i;
       for(j=i+1;j<=n-i;j++)
       {
            count++;
            if(a[j]<a[min])
            {
                min=j;
            }
       }
            temp=a[j];
            a[i]=a[min];
            a[min]=temp;
        }
        printf("the count is &d\n",count);

}

int main()
{
    int i,n;
    printf("enter the number of element to be stored ");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("sorted element are ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
