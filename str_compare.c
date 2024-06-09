#include<stdio.h>
int comparestring(char str1[20],char str2[20]){
    int i=0,j=0;
    while(str1[i]!='\0'&& str2[j]!='\0'){
        if(str1[i]!=str2[j]){
            return 0;
        }
        i++;
        j++;
    }
    return 1;
}

int main(){
char str1[20],str2[20];
printf("enter string1:");
gets(str1);
printf("enter string2:");
gets(str2);
if(comparestring(str1,str2)){
    printf("str1 and str2 are same");
}
else{
    printf("str1 and str2 are different");
}
    return 0;
}

