#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,sum;
string s;

string tongcs(string s){
    int ans=0;
    for(char x:s) ans+=(x-'0');
    return to_string(ans);
}

bool res(string s){
    if (s=="9") return true;
    if (s.size()==1) return false;
    return res(tongcs(s));
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