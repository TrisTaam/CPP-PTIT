#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1005;
int n,a,b[2],ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    ans=0;
    foru(i,1,n){
        b[0]=b[1]=0;
        foru(j,1,3){
            cin >> a;
            b[a]++;
        }
        ans+=(b[1]>b[0]);
    }
    cout << ans;
}