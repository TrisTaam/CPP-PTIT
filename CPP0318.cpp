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

bool res(string s){
    int cnt=1;
    foru(i,0,3)
        if (s[i]<s[i+1]) cnt++;
    if (cnt==5) return true;
    if (s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]) return true;
    if (s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4]) return true;
    for(char x:s)
        if (x!='6'&&x!='8') return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        s=s.substr(5,6);
        s.erase(3,1);
        cout << (res(s)?"YES":"NO") << "\n";
    }
}