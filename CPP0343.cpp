#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int t,cnt,b[2];
string s,a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        stringstream ss(s);
        cnt=0;
        b[0]=b[1]=0;
        while(ss >> a){
            cnt++;
            b[(a.back()-'0')&1]++;
        }
        cout << ((cnt%2==1&&b[1]>b[0])||(cnt%2==0&&b[0]>b[1])?"YES":"NO") << "\n";
    }
}