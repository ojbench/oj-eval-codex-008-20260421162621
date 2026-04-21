#include <bits/stdc++.h>
using namespace std;
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s; if(!(getline(cin,s))) return 0; auto p=s.find('+'); if(p==string::npos){cout<<s; return 0;} string a=s.substr(0,p), b=s.substr(p+1);
    int i=a.size()-1,j=b.size()-1,carry=0; string r; r.reserve(max(a.size(),b.size())+1);
    while(i>=0||j>=0||carry){int x=0,y=0; if(i>=0&&isdigit((unsigned char)a[i])) x=a[i]-'0'; if(j>=0&&isdigit((unsigned char)b[j])) y=b[j]-'0'; int sum=x+y+carry; r.push_back(char('0'+(sum%10))); carry=sum/10; --i; --j;}
    while(r.size()>1 && r.back()=='0') r.pop_back();
    reverse(r.begin(), r.end()); cout<<r; return 0;}
