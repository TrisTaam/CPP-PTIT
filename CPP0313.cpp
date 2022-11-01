#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

string s1,s2;
int a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s1);
    getline(cin,s2);
    a=s1.find(s2);
    while(a!=string::npos){
        s1.erase(a,s2.size());
        a=s1.find(s2);
    }
    cout << s1;
}