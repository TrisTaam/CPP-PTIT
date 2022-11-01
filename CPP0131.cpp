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
int t,n,c[N],j;
bool a[N];
vector<int> b;

void sieve(){
    fill(a,true);
    a[0]=a[1]=false;
    for(int i=2;i*i<=N;++i)
        if (a[i])
            for(int j=i*i;j<=N;j+=i) a[j]=false;
    foru(i,2,N)
        if (a[i]) b.push_back(i);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    c[1]=1;
    foru(i,2,10000){
        j=0;
        while(i%b[j]) j++;
        c[i]=b[j];
    }
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,1,n) cout << c[i] << " ";
        cout << "\n";
    }
}