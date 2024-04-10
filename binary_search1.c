#include<stdio.h>
int binary_search(int arr[],int length,int target){
    int low=0;
    int high=length-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==target){
    return mid;
}
else if(arr[mid]<target){
    low=mid+1;
}
else{
    high=mid-1;
}
}
return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=50;
    int length=sizeof(arr)/sizeof(arr[0]);
    int index=binary_search(arr,length,target);
    if(index==-1){
        printf("Element not found.");
    }
    else{
        printf("element found at index  ");
        printf("%d",index);
    }
    return 0;
}