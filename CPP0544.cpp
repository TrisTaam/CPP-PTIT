#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))
#define PI 3.141592653589793238

struct Point{
    double x,y;
};

int t,n;
Point A,B,C;
double a,b,c,s,r;

double dis(Point a,Point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

void input(Point &a){
    cin >> a.x >> a.y;
}

int main(){
    cin >> t;
    while(t--){
        input(A);
        input(B);
        input(C);
        a=dis(A,B);
        b=dis(B,C);
        c=dis(C,A);
        if (a+b>c&&b+c>a&&c+a>b){
            s=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
            r=a*b*c/(4*s);
            printf("%.3lf",PI*r*r);
        }
        else cout << "INVALID";
        cout << "\n";
    }
}