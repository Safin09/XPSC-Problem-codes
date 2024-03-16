#include<bits/stdc++.h>
#define ll long long
#define pb  push_back
using namespace std;


int main()
{
string s;cin>>s;
sort(s.begin(),s.end());
ll c=0;
ll f=0;
if(s[0]!='a'){
    cout<<'a'<<'\n';
}
else{
        for(int i=0;i<s.size();i++){


    if(int(s[i+1])-int(s[i])>1){

       cout<<char(int(s[i])+1)<<'\n';
       f=1;

       break;
       }
       else{
            c++;
       }}


if(c==s.size()&&s[s.size()-1]!='z'){
    cout<<'z'<<endl;
    f=1;
}
if(f==0){
    cout<<"None"<<'\n';
}

}




  return 0;
}

