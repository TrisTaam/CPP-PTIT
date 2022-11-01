#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

ifstream f1;
string s;
map<int,int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f1.open("DATA.in",ios::in);
    while(f1 >> s) b[stoi(s)]++;
    for(auto x:b) cout << x.fi << " " << x.se << "\n";
}