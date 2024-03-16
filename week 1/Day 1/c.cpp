
#include<bits/stdc++.h>
#define ll long long
#define pb  push_back;
using namespace std;


int main()
{
 ll a,b;cin>>a>>b;
 ll s=0;
 for(ll i=0;i<2;i++){
    if(a>b){
        s=s+a;
        a--;
    }
    else{
       s=s+b;
       b--;
    }
}
cout<<s<<'\n';
  return 0;
}
