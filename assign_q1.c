//1. Implement linear search and binary search using recursion.

#include<stdio.h>
#define SIZE 10
int rec_linear_search(int arr[SIZE],int key, int index);
int rec_bin_search(int arr[SIZE],int key,int left,int right);

int main()
{
    int key,result;
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    printf("Enter key element to search:\n");
    scanf("%d",&key);

    result = rec_linear_search(arr,key,0);
    if(result == -1)
    printf("Key is not found!\n");
    else
    printf("For linear search Key is found at index %d\n",result);
    int res = rec_bin_search(arr,key,0,SIZE-1);
    if(res == -3)
    printf("Key is not found!\n");
    else
    printf("For binary search Key is found at %d\n",res);
    return 0;
}
int rec_linear_search(int arr[SIZE],int key,  int index)
{
        
        if(key == arr[index])
        {
        return index;
        }
        else{
            return rec_linear_search(arr++,key,index+1);
        }
    
        return -1;
}
int rec_bin_search(int arr[SIZE],int key,int left,int right)
{
    int mid,res;
    if(left > right)
        return -3;

    mid = (left + right)/2;
    if(key == arr[mid])
        return mid;
    
    if(key < arr[mid])
    {
        res = rec_bin_search(arr,key,left,mid-1);
    }
    else
    {
    res = rec_bin_search(arr,key,mid+1,right);
    }
    return res;
}