#include <stdio.h>
#include <string.h>
void substring(char *text, char *pattern){
  int n=strlen(text);
  int m=strlen(pattern);
  int i,j;
  for(i=0; i<=n-m;i++){
    for(j=0;j<n;j++){
      if(text[i+j]!=pattern[j]){
        break;
      }
    }
    if(j==m){
      printf("Pattern found on index %d\n",i);
    }
  }
}
int main()
{
  char text[50]="ABACABCAABCAABCA";
  char pattern[10]="BCA";
  substring(text, pattern);
  return 0;
}