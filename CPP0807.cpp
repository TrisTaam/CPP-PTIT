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
int n,m,a;
map<int,int> b,c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f1.open("DATA.in",ios::in);
    f1 >> n >> m;
    while(n--){
        f1 >> a;
        b[a]++;
    }
    while(m--){
        f1 >> a;
        c[a]++;
    }
    for(auto x:b)
        if (c[x.fi]) cout << x.fi << " ";
    f1.close();
}