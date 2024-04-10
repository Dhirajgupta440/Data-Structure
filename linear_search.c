#include<stdio.h>
int linear_search(int arr[],int length,int target){
    for(int i=0;i<length;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int length=sizeof (arr)/sizeof (arr[0]);
    int target=50;
    int result=linear_search(arr,length,target);
    if(result==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at index i:%d",result);
    }
    return 0;
}