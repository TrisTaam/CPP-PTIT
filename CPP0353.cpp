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
string s,s1;

string res(char x){
    if (x=='A'||x=='B'||x=='C') return "2";
    if (x=='D'||x=='E'||x=='F') return "3";
    if (x=='G'||x=='H'||x=='I') return "4";
    if (x=='J'||x=='K'||x=='L') return "5";
    if (x=='M'||x=='N'||x=='O') return "6";
    if (x=='P'||x=='Q'||x=='R'||x=='S') return "7";
    if (x=='T'||x=='U'||x=='V') return "8";
    return "9";
}

bool palin(string s){
    int n=s.size();
    foru(i,0,n/2)
        if (s[i]!=s[n-i-1]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        s1="";
        for(char x:s) s1+=res(toupper(x));
        cout << (palin(s1)?"YES":"NO") << "\n";
    }
}