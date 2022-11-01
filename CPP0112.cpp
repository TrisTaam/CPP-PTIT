#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t;
double xa,ya,xb,yb;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cout << setprecision(4) << fixed;
    while(t--){
        cin >> xa >> ya >> xb >> yb;
        cout << sqrt(pow(xa-xb,2)+pow(ya-yb,2)) << "\n";
    }
}