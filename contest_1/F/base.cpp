#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n, k; 
 
    cin >> n >> k; 
 
    
    vector<ll> h;
    vector<ll> p;
    vector<ll> sp(n+1); 
    sp[0]=0;
       
    for (ll i=0; i < n; i++){
    
        ll m; 
 
        cin >> m; 
 
        h.push_back(m);
        
 
        
        
    }
 
    for (ll i=0; i < n; i++){
    
        ll m; 
 
        cin >> m; 
 
        p.push_back(m);
        
    }
 
    
    ll acum = 0;
    ll bi = 0;
    for (ll i=0; i < n; i++){
 
        
        if(p[i]==1){
            acum = acum + h[i];
            sp[i+1]= sp[i] + 0;
        }
        else{
            sp[i+1]= sp[i] + h[i];
            
 
 
        }
        
    }
 
    for(ll i=0; i + k <= n; i++){
        if(k+i < sp.size()){
        
            if( bi < (sp[k+i] - sp[i])) {
                
                bi = sp[k+i] - sp[i];
            }
        }
    }
 
    cout << (bi + acum);
 
 
 
 
 
    
    
 
 
    
    
}