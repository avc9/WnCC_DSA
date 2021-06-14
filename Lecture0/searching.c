#include<stdio.h>
#include<stdlib.h>

int linear_search(int *arr,int key,int len){
    
    for(int i=0;i<len;i++)
        if(key==arr[i])
            return i+1;
    
    return -1;
}


int comp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}

int binary_search(int *arr,int key,int len){
    //int len=sizeof(arr)/sizeof(arr[0]);
    
    qsort((void*)arr,len,sizeof(arr[0]),comp);
    
    int low=0,high=len-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        
        if(key==arr[mid])
            return mid+1;
        
        else if(key>arr[mid])
            low=mid+1;
            
        else
            high=mid-1;
    }
    
    return -1;
}

int main(){
    int arr[]={10 ,7, 9 , 2, 0, 1};
    
    int len=sizeof(arr)/sizeof(arr[0]);
    
    int key=9;
    
    printf("The position of %d is %d according to linear search\n",key,linear_search(arr,key,len));
    printf("The position of %d is %d according to binary search",key,binary_search(arr,key,len));
    
    return 0;
}
