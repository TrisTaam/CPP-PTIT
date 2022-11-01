#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

const int N=1e7+5;
int t,n,k,a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        foru(i,1,n) cin >> a[i];
        deque<int> dq;
        foru(i,1,n){
            while(!dq.empty()&&a[dq.back()]<=a[i]) dq.pop_back();
            dq.push_back(i);
            if (dq.front()+k<=i) dq.pop_front();
            if (i>=k) cout << a[dq.front()] << " ";
        }
        cout << "\n";
    }
}