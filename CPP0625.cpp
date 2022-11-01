#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))

class Gv{
public:
    static int NUM_GV;
    Gv();
    string getFirstName();
    string getId();
    friend istream& operator >>(istream &in,Gv &a);
    friend ostream& operator <<(ostream &out,Gv a);
private:
    string id,name,job,firstName;
};

Gv::Gv(){}

string Gv::getFirstName(){
    return firstName;
}

string Gv::getId(){
    return id;
}

istream& operator >>(istream &in,Gv &a){
    a.id=to_string(++Gv::NUM_GV);
    if (a.id.size()==1) a.id="0"+a.id;
    a.id="GV"+a.id;
    getline(in,a.name);
    string s;
    stringstream ss1(a.name);
    while(ss1 >> s) a.firstName=s;
    getline(in,s);
    stringstream ss2(s);
    a.job="";
    while(ss2 >> s){
        a.job+=toupper(s[0]);
    }
    return in;
}

ostream& operator <<(ostream &out,Gv a){
    cout << a.id << " " << a.name << " " << a.job << "\n";
    return out;
}

bool cmp(Gv a,Gv b){
    if (a.getFirstName()<b.getFirstName()) return true;
    if (a.getFirstName()==b.getFirstName()&&a.getId()<b.getId()) return true;
    return false;
}

int Gv::NUM_GV=0;

int n;
vector<Gv> a;
Gv tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin.ignore();
    foru(i,1,n){
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end(),cmp);
    foru(i,0,n-1) cout << a[i];
}