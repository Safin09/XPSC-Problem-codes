#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
  ll x,y;
  cin>>x>>y;
  ll cnt=0;
  ll i=x;
  while(true){
    if(i>y)break;
    i*=2;
    cnt++;
  }
  cout<<cnt<<'\n';



  }


