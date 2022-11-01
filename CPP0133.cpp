#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e4+5;
int t,n,i;
bool a[N];

void sieve(){
    fill(a,true);
    a[0]=false;
    a[1]=false;
    for(int i=2;i*i<=N;++i)
        if (a[i])
            for(int j=i*i;j<=N;j+=i) a[j]=false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,2,n)
            if (a[i]) cout << i << " ";
        cout << "\n";
    }
}