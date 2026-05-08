#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 

bool prime(ll n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n; 
 
    cin >> n; 
 
    
    vector<pair<ll, bool>> h;
    vector<ll> hp;
       
    for (ll i=0; i < n; i++){
        pair<ll, bool> p;
    
        ll m; 
 
        cin >> m; 
        p.first=m;
        p.second=true;
        h.push_back(p);
    }
 
    ll tt = h.size();
    ll d=0;
    ll e=-1;

    ll co=0;
    vector<ll> r; 
    vector<ll> w; 
    for (ll i=0; i < n; i++){
        ll c=0;
        for (ll j = i + 1; j < n; j++){
            if(!prime(h[i].first + h[j].first)){
                c++;
                co++;               
            }
            
        }
        r.push_back(c);

            if(d < r[i] ){
            d= r[i];
            e=i;
            }
    }
    if(e>=0){
        h[e].second=false;
        tt--;
    }
    co = co - (d*2);
  
    while (co != 0){
        d=0;
        e=-1;
        for (ll i=0; i < r.size(); i++){
            if(d < r[i] ){
            d= r[i];
            e=i;
            }

        }
        co = co - (d*2);
            if(e>=0){
               h[e].second=false;
               tt--;
            }
    }

    cout << tt << "\n";
    for (ll i=0; i < n; i++){
        if(h[i].second ){
            cout << h[i].first << " ";
        }

    }
    
    
   
    
}

//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable