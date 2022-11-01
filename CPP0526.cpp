#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=105;
int n;
pair<string,string> a[N];

string rev(string s){
    return s.substr(6,4)+"/"+s.substr(3,2)+"/"+s.substr(0,2);
}

bool cmp(pair<string,string> a,pair<string,string> b){
    return rev(a.se)>rev(b.se);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    foru(i,0,n-1) cin >> a[i].fi >> a[i].se;
    sort(a,a+n,cmp);
    cout << a[0].fi << "\n" << a[n-1].fi;
}