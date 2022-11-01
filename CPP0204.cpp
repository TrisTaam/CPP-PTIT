#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int t,l,r,b[N];
bool a[N];

void sieve(){
    fill(a,true);
    a[0]=a[1]=false;
    for(int i=2;i*i<=100000;++i)
        if (a[i])
            for(int j=i*i;j<=100000;j+=i) a[j]=false;
    b[0]=0;
    foru(i,1,100000) b[i]=b[i-1]+a[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> t;
    while(t--){
        cin >> l >> r;
        cout << b[r]-b[l-1] << "\n";
    }
}