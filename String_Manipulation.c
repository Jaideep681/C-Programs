#include <stdio.h>
#include <string.h>
void substr(char str3[], int pos, int count,char str4[]){
  int i;
  for(i=0; i<count && str3[pos-1+i]!='\0'; i++){
    str4[i]=str3[pos-1+i];
  }
  str4[i]='\0';
}
int main(){
    char str1[20],str2[20],copy[50],str3[50],str4[30];
    int pos,count;
    printf("Enter 1st String: ");
    gets(str1);
    printf("1st String length is %lu\n",strlen(str1));
    printf("Copied string: ");
    puts(strcpy(str2,str1));
    int cmp=strcmp(str1,str2);
    if(cmp==0){
      printf("Yes, both String 1 & String 2 is same.\n");
    }
    else{
      printf("Both Strings are not same.\n");
    }
    printf("Concatenated string: ");
    puts(strcat(str1,str2));
    printf("Enter 3rd String: ");
    gets(str3);
    printf("Enter position to retrieve new string: ");
    scanf("%d",&pos);
    printf("Enter length to retrieve new string: ");
    scanf("%d",&count);
    substr(str3,pos,count,str4);
    printf("Your Choosen string: %s\n",str4);
    return 0;
}