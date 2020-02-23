#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i,e,a,b,d,j;
int *c;;
cin>>n;
vector <int> v;

vector<int>::iterator it;
for(i=0;i<n;i++){
cin>>a;
v.push_back(a);

}
b=max_element(v.begin(),v.end())-v.begin();
d=min_element(v.begin(),v.end())-v.begin();
j=n-1;
while(d<j){

  if(v[d]==v[j]){
    d=j;
    break;
  }
  j--;
}
//cout<<b<<d;
e=n-1-d;
if(d<=b){
cout<<b+e-1<<endl;
}
else{
  cout<<b+e<<endl;
}
return 0;}
