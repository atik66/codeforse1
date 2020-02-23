#include<stdio.h>
#include<string.h>
int main(){
char c[100];
int i,j,k,a,b;
gets(c);
a=strlen(c);
for(j=0;j<a;j=j+2){
for(i=0;i<a-1;i=i+2){
if(c[i]>c[i+2]){
  b=c[i];
  c[i]=c[i+2];
  c[i+2]=b;
}
}}
for(i=0;i<a;i++){

  printf("%c",c[i]);
}
return 0;}
