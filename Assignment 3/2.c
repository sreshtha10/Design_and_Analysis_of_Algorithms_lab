/*
Given an array of positive and negative integers, 
segregate them without changing the relative order of elements.
The output should contain all positive numbers following negative numbers
while maintaining the same relative ordering. */

#include<stdio.h>
#include<math.h>
void segregate(int arr[],int low,int mid,int high){
    int lsize = mid-low+1;
    int rsize = high-mid;
    int left[lsize],right[rsize];
    for(int i=0;i<lsize;i++){
        left[i] = arr[low+i];
    }
    for(int j=0;j<rsize;j++){
        right[j] = arr[mid+1+j];
    }
    
    int j=0,i=0,k=low;
    
    while(i<lsize){
        if(left[i]>=0){
            arr[k] = left[i];
            k++;
        }
        i++;
    }
    
    while(j<rsize){
        if(right[j] >= 0){
            arr[k] = right[j];
            k++;
        }
        j++;
        
    }
    
    i=0,j=0;
    while(i<lsize){
        if(left[i]<0){
            arr[k] = left[i];
            k++;
        }
        i++;
    }
    
    while(j<rsize){
        if(right[j] < 0){
            arr[k] = right[j];
            k++;
        }
        j++;
    }
}

void merge_sort(int arr[],int low,int high){
    if(low<high){
        int mid = floor((double)high+(low-high)/(double)2);
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        segregate(arr,low,mid,high);
    }
    return;
}

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array values\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    merge_sort(arr,0,n-1);
    
    printf("----------\nSegregated Array\n---------\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
