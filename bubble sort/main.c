#include <stdio.h>
#include <stdlib.h>
#define size 100
int a[size],count=0;
void bubblesort(int a[size],int n)
{
   int i,j,temp;
   for(i=0;i<=n-2;i++)
   {
       for(j=0;j<=n-i-2;j++)
       {
            count++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
   }
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
    bubblesort(a,n);
    printf("sorted element are ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
