#include<stdio.h>
int main(){
    int n,i,l,h,mid,key;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements in sotred sequence: \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the searching element:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==array[mid]){
            printf("%d present at %d location",key,mid);
            break;
        }
        else if(key<array[mid]){
            h=mid-1;
        }
        else if (key>array[mid]){
            l=mid+1;
        }
        else{
           printf("The element is not found."); 
        }
    }
    
    return 0;
}