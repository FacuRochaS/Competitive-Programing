#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;
 


pair<ll,ll> binary(vector<ll> v, ll n){
    ll l = 0;
    ll r=v.size();

    while(l<r){
        ll m=(l+r)/2;
        if(v[m]<= n){
            l=m;
        }else{
            r=m;
        }
    }
    pair<ll,ll> p;
    p.first=l;
    p.second=r;
    return p;
}

int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n;
    cin >> n;
    vector<ll> h;
       
    for (ll i=0; i < n; i++){
    
        ll m; 
 
        cin >> m; 
 
        h.push_back(m);
    }
 
    sort(h.begin(),h.end());
    ll k;
    cin>>k;
    vector<ll> p;
    for (ll i=0; i < k; i++){
    
        ll l, r; 
 
        cin >> l >> r; 

        

        cout << upper_bound(h.begin(), h.end(), r) - lower_bound(h.begin(), h.end(), l) << " ";
       
       //ll res = binary(h,r).second - binary(h,l).first  ;
        //cout << res << " ";
        



    }
 

    // 
 
 
    
    
}




/*

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(0);
 
    cin.tie(0);  
    cout.tie(0);
 
    
    ll n;
    cin >> n;
    vector<ll> h;
       
    for (ll i=0; i < n; i++){
    
        ll m; 
 
        cin >> m; 
 
        h.push_back(m);
    }
 
    sort(h.begin(),h.end());
    ll k;
    cin>>k;
    vector<ll> p;
    for (ll i=0; i < k; i++){
    
        ll m, o; 
 
        cin >> m >> o; 
 
// 1 2 4 10 10
        ll res = n;
        ll u = n - 1;
        for(ll j=0; j < n; j++){
            if(h[j] < m){
                res--;
            }
            if(h[u] > o){
                res--;
            }

            u--;
        }

        if(res>= 0){
            cout << res;
        }else{
            cout << 0;
        }
        cout << " ";



    }
 
 
 
    
    
}
*/
//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable