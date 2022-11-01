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
int m,s,a[N],s1;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> s;
    if (m==1&&s==0) cout << "0 0";
    else if (9*m<s||s==0) cout << "-1 -1";
    else{
        fill(a,0);
        s1=s;
        ford(i,m,1){
            ford(j,9,0)
                if (s1-j>=0){
                    a[i]=j;
                    s1-=j;
                    break;
                }
            if (a[i]==0) break;
        }
        if (a[1]==0){
            a[1]=1;
            foru(i,2,m)
                if (a[i]){
                    a[i]--;
                    break;
                }
        }
        foru(i,1,m) cout << a[i];
        cout << " ";
        fill(a,0);
        s1=s;
        foru(i,1,m){
            ford(j,9,0)
                if (s1-j>=0){
                    a[i]=j;
                    s1-=j;
                    break;
                }
            if (a[i]==0) break;
        }
        foru(i,1,m) cout << a[i];
    }
} 