#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,n,ans,l,r,m,tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n),b(n+1,INT_MIN);
		foru(i,0,n-1) cin >> a[i];
	    ford(i,n-1,0) b[i]=max(b[i+1],a[i]);
        ans=0;
	    foru(i,0,n-1){
	        l=i+1;
            r=n-1;
            tmp=i;
	        while(l<=r){
	            m=(l+r)/2;
	            if(a[i]<=b[m]){
	                tmp=max(tmp,m);
	                l=m+1;
	            }
	            else r=m-1;
	    	}
	        ans=max(ans,tmp-i);
	    }
	    cout << ans << "\n";
    }
}