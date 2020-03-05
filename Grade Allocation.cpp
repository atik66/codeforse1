#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,m,i,sum=0;
  cin>>n>>m;
  int c[n];
  for(i=0;i<n;i++){

    cin>>c[i];
    sum=sum+c[i];
  }

  if(sum>=m){
    cout<<m<<endl;
  }
else{
  cout<<sum<<endl;
}

}



return 0;}
