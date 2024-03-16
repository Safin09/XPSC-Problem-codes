

#include<bits/stdc++.h>
#define ll long long
#define pb  push_back;
using namespace std;


int main()
{
 string s;cin>>s;
 if(s.size()<4&&s.size()>=3){
    cout<<'0'+s<<endl;
 }
 else if(s.size()<4&&s.size()>= 2){
    cout<<"00"+ s<<endl;
 }
 else if(s.size()<4&&s.size()>=1){
    cout<<"000"+s<<endl;
 }
 else{
    cout<<s<<endl;
 }
  return 0;
}
