#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    int t;
    int a,b,c; // large
 
    cin >> t; 
    vector<bool> v;
    for (ll i=0; i < t; i++){
        
        cin >> a >> b >> c;
       if((a+b)==c){
        v.push_back(true);
       }
       else{
        v.push_back(false);
       }
 
    }
    for (ll i=0; i < t; i++){
        if(v[i]){
            cout << "+\n";
        }
        else{
            cout << "-\n" ;
        }
 
    }
 
 
    
    
}