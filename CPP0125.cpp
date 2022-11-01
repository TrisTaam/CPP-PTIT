#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e6+5;
int a,b;
bool c[N];

void sieve(){
    fill(c,true);
    c[0]=false;
    c[1]=false;
    for(int i=2;i*i<=N;++i)
        if (c[i])
            for(int j=i*i;j<=N;j+=i) c[j]=false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> a >> b;
    if (a>b) swap(a,b);
    foru(i,a,b)
        if (c[i]) cout << i << " ";
}