#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

ifstream f1,f2;
string s;
map<string,int> b,c,d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f1.open("DATA1.in",ios::in);
    f2.open("DATA2.in",ios::in);
    while(f1 >> s){
        foru(i,0,s.size()-1) s[i]=tolower(s[i]);
        b[s]++;
        d[s]++;
    }
    f1.close();
    while(f2 >> s){
        foru(i,0,s.size()-1) s[i]=tolower(s[i]);
        c[s]++;
        d[s]++;
    }
    f2.close();
    for(auto x:d) cout << x.fi << " ";
    cout << "\n";
    for(auto x:b)
        if (c[x.fi]) cout << x.fi << " ";
}