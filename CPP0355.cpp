#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

string s;
int n;
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    kt=true;
    while(cin >> s){
        n=s.size();
        foru(i,0,n-1) s[i]=tolower(s[i]);
        if (kt){
            s[0]=toupper(s[0]);
            kt=false;
        }
        if (s[n-1]=='.'||s[n-1]=='?'||s[n-1]=='!'){
            s.erase(n-1,1);
            kt=true;
            cout << s << "\n";
        }
        else cout << s << " ";
    }
}