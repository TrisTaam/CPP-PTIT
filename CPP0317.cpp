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

bool palin(string s){
    int n=s.size();
    foru(i,0,n/2)
        if (s[i]!=s[n-i-1]) return false;
    return true;
}

bool even(string s){
    foru(i,0,s.size()-1)
        if ((s[i]-'0')&1) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        cout << (palin(s)&&even(s)?"YES":"NO") << "\n";
    }
}