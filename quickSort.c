 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

void quickSort(int a[],int m,int n)
{
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
        a[i] = k;
        quickSort(a,m,i-1);
        quickSort(a,i+1,n);
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


    quickSort(a,m, n);

 /*       int a[] = {33,23,5,21,67,22,8,3,78,90};
    int i;
    quickSort(a,0,9);
    for(i = 0;i<10;i++)
        printf("%4d",a[i]);
    return 0;
    */
}


