#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=10005;
int a,n,b[N];
map<int,int> c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    n=0;
    while(cin >> a){
        b[n++]=a;
        c[a]++;
    }
    foru(i,0,n-1)
        if (c[b[i]]){
            cout << b[i] << " " << c[b[i]] << "\n";
            c[b[i]]=0;
        }
}