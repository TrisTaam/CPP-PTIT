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
string s;
int n,a[N],b[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    n=s.size();
    s=" "+s;
    a[0]=b[0]=0;
    foru(i,1,n)
        if (s[i]=='A'){
            a[i]=min(a[i-1],b[i-1]+1);
            b[i]=min(a[i-1],b[i-1])+1;
        }
        else{
            b[i]=min(b[i-1],a[i-1]+1);
            a[i]=min(a[i-1],b[i-1])+1;
        }
    cout << a[n];
}