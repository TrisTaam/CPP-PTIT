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
int t,n,a,b[N],c[N];
bool kt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        b[0]=0;
        foru(i,1,n){
            cin >> a;
            b[i]=b[i-1]+a;
        }
        c[0]=0;
        foru(i,1,n){
            cin >> a;
            c[i]=c[i-1]+a;
        }
        kt=false;
        ford(i,n,1){
            foru(j,1,n-i+1)
                if (b[j+i-1]-b[j-1]==c[j+i-1]-c[j-1]){
                    cout << i << "\n";
                    kt=true;
                    break;
                }
            if (kt) break;
        }
    }
}