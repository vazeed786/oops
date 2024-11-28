#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if(a==0 && b==0){
        cout<<"YES"<<endl;
        continue;
    }
    int x=0,y=0;
    int check=false;
    while(x<=a && y<=b){
    for(int i=0;i<n;i++){
        if(s[i]=='N') y++;
        else if(s[i]=='S') y--;
        else if(s[i]=='E') x++;
        else x--;
        if(a==x && b==y){
            cout<<"YES"<<endl;
            check=true;
            break;
        }
    }
    if(x==0 && y==0){
        cout<<"NO"<<endl;
        check=true;
        break;
    }
    }
    if(check) continue;
    else cout<<"NO"<<endl;
}
}