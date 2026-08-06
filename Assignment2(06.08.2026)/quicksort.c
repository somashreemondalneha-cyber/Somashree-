/*
WAP in c to take input in an array 10 unorder number and apply
Quick Sort to order the array i ascending order.
*/



#include<stdio.h>
void quick_sort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        
        }
        if(i<=j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

        quick_sort(arr,low,j);
        quick_sort(arr,i,high);
    }
int main(){
        int arr[]={2,6,5,4,8,10,12,18,11};
        int size=sizeof(arr)/sizeof(arr[0]);
        quick_sort(arr,0,size-1);
        for(int i=0;i<size;i++){
            printf("%d " ,arr[i]);

        }
        return 0;

        }