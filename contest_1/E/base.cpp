#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n; 
 
    cin >> n; 
 
    
    vector<int> h;
 
       
    for (ll i=0; i < n; i++){
    
        ll m; 
 
        cin >> m; 
 
 
 
        ll b;
        ll c = 0;
        for (ll j=0; j < m; j++){
            ll x;
            cin >> x ;
            if(j==0){
                b=x;
                c++;
            }
            else{
                if(x>=b){
                    b=x;
                    c++;
                }
            }
 
 
 
 
            
        }
        h.push_back(c);
 
        
    }
 
 
 
 
    for(int i=0; i < h.size(); i++){
        
        cout << h[i] << "\n";
 
    }
 
 
 
    
    
 
 
    
    
}