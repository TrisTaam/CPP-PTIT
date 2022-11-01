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
    int x,y;
};

const int N=1005;
int t,n;
Point a[N];
double ans;

double res(Point a,Point b,Point c){
    return (double)abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y))/2;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        foru(i,0,n-1) scanf("%d%d",&a[i].x,&a[i].y);
        ans=0;
        foru(i,1,n-2) ans+=res(a[0],a[i],a[i+1]);
        printf("%.3lf\n",ans);
    }
}