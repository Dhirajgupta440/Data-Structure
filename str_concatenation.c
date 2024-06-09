#include<stdio.h>
int main(){
char str1[20],str2[20],result[50];
printf("enter string1:");
scanf("%s",str1);
printf("enter string2:");
scanf("%s",str2);
int i=0,j=0,k=0;
while(str1[j]!='\0'){
    result[i]=str1[j];
    i++;
    j++;
}
while(str2[k]!='\0'){
    result[i]=str2[k];
    i++;
    k++;
}
result[i]='\0';
printf("concatenated string:%s",result);
return 0;

}


