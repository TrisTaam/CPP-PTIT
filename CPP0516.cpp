#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

struct good{
    int id;
    string name,group;
    double buy,sell;
};

int n;
vector<good> a;
good b;

bool cmp(good a,good b){
    return a.sell-a.buy>b.sell-b.buy;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout << setprecision(2) << fixed;
    foru(i,1,n){
        b.id=i;
        cin.ignore();
        getline(cin,b.name);
        getline(cin,b.group);
        cin >> b.buy >> b.sell;
        a.push_back(b);
    }
    sort(a.begin(),a.end(),cmp);
    foru(i,0,n-1) cout << a[i].id << " " << a[i].name << " " << a[i].group << " " << a[i].sell-a[i].buy << "\n";
}