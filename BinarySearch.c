#include<stdio.h>
#include<stdlib.h>
 #include<time.h>
int binarySearch(int a[],int target,int n)
{
    int left = 0;
    int right = n-1;
    while(left<=right)
    {
        int middle = (left + right)/2;
        if(target == a[middle]) return middle;
        if(target > a[middle]) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}
int main()
{
    const int ARRAY_SIZE = 100000;
    int a[ARRAY_SIZE];
    int c;

    srand((unsigned)time(NULL));
    a[0] = rand()%10;
    for(c=1;c<100000;c++)
        a[c] = a[c-1] + rand()%10;

    int target = rand()*rand()%(500000 - 100 + 1) + 100;
     int result = binarySearch(a,target,ARRAY_SIZE);
     printf("The target is %d, and the result is %d",target,result);
}

