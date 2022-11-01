#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int A=1e7+5;
int t,n,a;
bool b[A];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        fill(b,false);
        foru(i,1,n-1){
            cin >> a;
            b[a]=true;
        }
        foru(i,1,n)
            if (!b[i]){
                cout << i << "\n";
                break;
            }
    }
}