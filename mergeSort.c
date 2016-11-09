#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int left[n1];
    int right[n2];
    int i;
    for( i=0;i<n1;i++)
        left[i]=a[p+i];
    int j;
    for(j=0;j<n2;j++)
        right[j]=a[q+j+1];
    i=0;
    j=0;
    int k;
    for(k=p;k<=r;k++)
    {
        if(i<n1 && j<n2 && left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else if(i<n1 && j<n2 && left[i] > right[j])
        {
            a[k]=right[j];
            j++;
        }
        else
        {
            if( i >= n1 )
            {
            while(j<n2)
                a[k++]= right[j++];
            }
            if(j >= n2)
            {
            while(i < n1)
                a[k++] = left[i++];
            }
        }
    }
}

void mergeSort(int a[],int p,int r)
{
        if(r>p)
 {

        int q;
        q=(p+r)/2;

    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    merge(a,p,q,r);
 }
}

int main()
{
    const int ARRAY_SIZE = 100000;
    int a[ARRAY_SIZE];
    int m = 0;
    int n = 99999;
    int c;
    srand((unsigned)time(NULL));
    for(c=0;c<100000;c++)
        a[c] = rand()*rand()%(1000000 - 100 + 1) + 100;
    mergeSort(a,m,n);
/*    int i;
    for(i=0;i<=n;i++)
        printf("%8d ",a[i]);
    return 0;       */
}



