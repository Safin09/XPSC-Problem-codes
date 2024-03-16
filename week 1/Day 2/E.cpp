
#include<bits/stdc++.h>
#define ll long long
#define pb  push_back;
using namespace std;


int main()
{
ll a,b,c;cin>>a>>b>>c;

int  x=1;
ll mul;
while(true){
    mul=c*x;
    if(mul>=a&&mul<=b){
        cout<<mul<<'\n';
        break;
    }
     else if(mul>b||mul==0){
            cout<<"-1"<<'\n';
    break;

    }
    else{
        x++;
    }
}
  return 0;
}
