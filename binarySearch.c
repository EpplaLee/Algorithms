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
        if(target == a[middle]) return middle;			//搜寻到结果，返回目标位置
        if(target > a[middle]) left = middle + 1;
        else right = middle - 1;
    }
    return -1;																		//未搜寻到结果，返回-1
}
int main()
{
    
    int a[10] = {23, 44, 1, 56, 34,85, 42,18,38, 71};
	int target = 44;
	int b[10] = {64, 16, 9, 56, 3,453, 27,10,78, 17};
	int target = 64;

     int result = binarySearch(a,target,10);
     printf("The target is %d, and the result is %d",target,result);
	 int result = binarySearch(b,target,10);
     printf("The target is %d, and the result is %d",target,result);
}

