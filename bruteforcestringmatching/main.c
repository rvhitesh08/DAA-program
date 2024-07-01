#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int T[20],char P[10];
int bfsm(char T[20],har P[10])
{
    int m,n,i,f,count=0;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<n-m;i++)
    {
        j=0;
        while(j<m &&(P[j]==T[i+j]))
    }
}
