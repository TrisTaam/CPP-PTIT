#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct Point{
    int x,y,z;
};

struct Vector{
    int x,y,z;
};

int t;
Point a[4];
Vector b[2],c;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        foru(i,0,3) cin >> a[i].x >> a[i].y >> a[i].z;
        foru(i,1,2){
            b[i-1].x=a[i].x-a[0].x;
            b[i-1].y=a[i].y-a[0].y;
            b[i-1].z=a[i].z-a[0].z;
        }
        c.x=b[0].y*b[1].z-b[0].z*b[1].y;
        c.y=b[0].z*b[1].x-b[0].x*b[1].z;
        c.z=b[0].x*b[1].y-b[0].y*b[1].x;
        cout << (c.x*(a[3].x-a[0].x)+c.y*(a[3].y-a[0].y)+c.z*(a[3].z-a[0].z)==0?"YES":"NO") << "\n";
    }
}