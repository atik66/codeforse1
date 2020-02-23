#include<stdio.h>
int main(){
int n,d=0,e=0,f=0,g=0,i;
scanf("%d",&n);
int c[n];
for(i=0;i<n;i++){
  scanf("%d",&c[i]);

}
for(i=0;i<n;i++){
  if(c[i]==4){
    d++;
  }
  else if(c[i]==3){
    e++;
  }
  else if(c[i]==2){
    f++;
  }
else{
  g++;
}
}
if(e>=g){
  g=0;
}
else if(g>e)
  g=g-e;
if((2*f+g)%4==0)
{
  f=(2*f+g)/4;

}
else if((2*f+g)%4!=0){
  f=((2*f+g)/4)+1;
}

  printf("%d\n",d+e+f);


return 0;}
