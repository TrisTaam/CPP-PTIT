#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct tmi{
    int h,m,s;
};

const int N=5005;
int n;
tmi a[N];

bool cmp(tmi a,tmi b){
    if (a.h<b.h) return true;
    if (a.h==b.h&&a.m<b.m) return true;
    if (a.h==b.h&&a.m==b.m&&a.s<b.s) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1) cin >> a[i].h >> a[i].m >> a[i].s;
    sort(a,a+n,cmp);
    foru(i,0,n-1) cout << a[i].h << " " << a[i].m << " " << a[i].s << "\n";
}