#include<iostream>
#include<algorithm>
int main(){

int n,i,e,f=0;
scanf("%d",&n);
while(n--){
  int m,a,b;
  scanf("%d %d %d",&m,&a,&b);
  int c[a],d[b];
  for(i=0;i<a;i++){
    scanf("%d",&c[i]);
  }
  for(i=0;i<b;i++){
    scanf("%d",&d[i]);
  }
  int max=d[0];
  for(i=1;i<b;i++){
    if(max<d[i])
       max=d[i];

  }
  f=0;
for(i=0;i<a;i++){
  if(c[i]<max){
    f++;

  }

  }
  if(f==i){
    printf("NO\n");

  }
  else
    printf("YES\n");


}





return 0;}
