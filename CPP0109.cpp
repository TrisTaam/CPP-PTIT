#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

int n,a,b,cnt;

bool res(int n){
    string s=to_string(n);
    int a[2]={0};
    for(char x:s) a[(x-'0')&1]++;
    return a[0]==s.size()/2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if (n%2==0){
        a=1;
        b=1;
        foru(i,1,n){
            a*=10;
            b*=10;
        }
        a/=10;
        b--;
        cnt=0;
        foru(i,a,b)
            if (res(i)){
                cout << i << " ";
                cnt++;
                if (cnt==10){
                    cout << "\n";
                    cnt=0;
                }
            }
    }
}