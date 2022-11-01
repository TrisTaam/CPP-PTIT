#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
string s;

string res(string s){
    if (s[0]=='0') return "INVALID";
    bool a[10];
    for(char x:s)
        if (x<'0'||x>'9') return "INVALID";
        else a[x-'0']=true;
    foru(i,0,9)
        if (!a[i]) return "NO";
    return "YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cout << res(s) << "\n";
    }
}