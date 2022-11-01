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
int t,m,n;
ll a[N][N];
string s;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> m >> n;
        cin >> s;
        foru(i,0,m-1) fill(a[i],0);
        a[0][(s[0]-'0')%n]++;
        foru(i,1,m-1){
            a[i][(s[i]-'0')%n]++;
            foru(j,0,n-1){
                a[i][j]+=a[i-1][j];
                a[i][(j*10+s[i]-'0')%n]+=a[i-1][j];
            }
        }
        cout << a[m-1][0] << "\n";
    }
}