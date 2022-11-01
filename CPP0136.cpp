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
int t,b[N];
ll n;
bool a[N];

void sieve(){
    fill(a,true);
    a[0]=a[1]=false;
    for(int i=2;i*i<=N;++i)
        if (a[i])
            for(int j=i*i;j<=N;j+=i) a[j]=false;
    b[0]=0;
    foru(i,1,1000000) b[i]=b[i-1]+a[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> t;
    while(t--){
        cin >> n;
        n=(ll)sqrt(n);
        cout << b[n] << "\n";
    }
}