#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void merge(int a[size],int l,int m,int r )
{
    int i,j,k,b[size];
    i=l;
    j=m+1;
    while(i<=m && j<=r)
    {
        count++;
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=m)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=b[i];
}
void mergesort(int a[size],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    int a[size],i,n;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("\n sorted array is ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n count is %d",count);
    return 0;
}
