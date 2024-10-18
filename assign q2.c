//2. Modify selection sort, bubble sort and insertion sort functions to return number of passes and number of comparisons and print both in main function.
#include<stdio.h>
#define SIZE 6
#define SWAP(a,b) int temp = a; a=b; b=temp;
void selection_sort(int arr[SIZE]);
void bubble_sort(int arr[SIZE]);
void insertion_sort(int arr[SIZE]);

void display(int arr[SIZE]);

int main()

{
    int arr[SIZE] = {30,20,60,50,10,40};
    //int arr[SIZE] = {11,22,33,44,55,66};
    printf("\nBefore sort:\n");
    display(arr);
    selection_sort(arr);
    printf("\nAfter selection sort:\n");
    display(arr);
    bubble_sort(arr);
    printf("\nAfter bubble sort:\n");
    display(arr);
    insertion_sort(arr);
    printf("\nAfter insertion sort:\n");
    display(arr);
    return 0;
}


void selection_sort(int arr[SIZE])
{
    int sel_pos,pos;
    int iteration=0, comparison=0;
    
    for(sel_pos = 0; sel_pos < SIZE-1 ; sel_pos++)
    {
        iteration++;
        for(pos = sel_pos+1 ; pos < SIZE ; pos++)
        {
            comparison++;
            if(arr[sel_pos] > arr[pos])
            {
                SWAP(arr[sel_pos],arr[pos]);
            }   
        }
    }
    printf("\nSelection sort -> Iterations =%d comparisons =%d\n",iteration,comparison);
}
 
void bubble_sort(int arr[SIZE])
{
    int pos1,pos2=0;
    int iteration=0, comparison=0;
    for(pos2 = 0; pos2 < SIZE-1;pos2++)
    {
        iteration++;
        for(pos1 = 0; pos1<SIZE-1-pos2; pos1++)
        {
            comparison++;
            if(arr[pos1] > arr[pos1+1])
            {
                SWAP(arr[pos1],arr[pos1+1]);
            }
        }
    }
    printf("\nBubble sort -> Iterations = %d Comparisons = %d\n",iteration,comparison);
}
void insertion_sort(int arr[SIZE])
{
    int iteration=0, comparison=0;
    int i,j,temp;
    for(i=1; i< SIZE; i++)
    
    {
        temp = arr[i];
        for(j=i-1; j>=0 && temp < arr[j];j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    printf("\nInsertion sort -> Iterations = %d Comparisons = %d\n",iteration,comparison);
}

 void display(int arr[SIZE])
 {
     for(int i=0; i<SIZE; i++)
     {
         printf("%4d",arr[i]);       
     }
 }