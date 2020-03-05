#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
  int a,n;
  cin>>a;
  n=(180-a);
  if(n==0){
    cout<<"NO"<<endl;
  }
  else{
  if(360%n==0)
{
  cout<<"YES"<<endl;

}
else {
  cout<<"NO"<<endl;
}
  }
}



return 0;}
