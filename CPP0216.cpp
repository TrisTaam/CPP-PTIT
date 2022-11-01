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
int t,n,a[N],l,r,pos;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        foru(i,0,n-1) cin >> a[i];
        cin >> l >> r;
        pos=-1;
        foru(i,l,r-1)
            if (a[i]>a[i+1]){
                pos=i;
                break;
            }
        if (pos>-1){
            foru(i,pos,r-1)
                if (a[i]<a[i+1]){
                    pos=-2;
                    break;
                }
        }
        cout << (pos==-2?"No":"Yes") << "\n";
    }
}