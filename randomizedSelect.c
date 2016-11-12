#include<stdio.h>
#include<stdlib.h>

int randomizedSelect(int a[],int m,int n,int target)
{
    int tar = target -1;
    int i,j,k;
    if(m < n)
    {
        i = m;
        j = n;
        k = a[i];
        while(i < j)
        {
            while(i < j && a[j] >k)
                j--;
            if(i<j)
            a[i++] = a[j];
            while(i < j && a[i] < k)
                i++;
            if(i<j)
            a[j--] = a[i];
        }
    }
    if(m==n)
        return a[m];


        a[i] = k;
        if(i == tar)
            return a[i];

        else if(i > tar)
             return randomizedSelect(a,m,i-1,target);
        else
             return randomizedSelect(a,i+1,n,target);

}
int main()
{
    int a[] = {33,23,5,21,67,22,8,3,78,90};



    printf("%4d",randomizedSelect(a,0,9,2));
    return 0;
}

