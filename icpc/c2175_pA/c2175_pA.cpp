#include <bits/stdc++.h>
using namespace std;
typedef long long ll;








int main() {
    ios::sync_with_stdio(0);

    cin.tie(0);  
    cout.tie(0);


    int t;
    cin >> t; //cantidad de test cases
    vector<ll> s; //soluciones


    for (int i=1; i <= t; i++){
        int n;
        cin >> n; //largo del vector
        int x;
        int cant;
        int res = 0 ;

        for (int j=1; j <= n; j++){ 
            cin >> x; 
            if(j==1){
                cant = x;
            }
            if(x < cant){
                res++;
            }
            else{
                cant = x;
            }
            
        }

        s.push_back(res);

    }

    for(int i = 0; i < t; i++){
        cout << s[i] << "\n";
    }


    
}



/*
ll calc(vector<ll> v, ll n){
    
    int j = n - 1;
    ll cant = 0;
    for(int i = n - 2; i >= 0; i--){
        if(v[i] > v[j]){
            cant++;
        }


        j--;
    }
    return cant;

}

int main() {
    ios::sync_with_stdio(0);

    cin.tie(0);  
    cout.tie(0);


    int t;
    cin >> t; //cantidad de test cases
    vector<ll> s; //soluciones
    for (int i=1; i <= t; i++){
        int n;
        cin >> n; //largo del vector
        vector<ll> v(n);

        for (int j=1; j <= n; j++){ //llenar el vector de numeros
            cin >> v[j-1]; // al vector en la posicion j-1 le meto un valor
        }

        s.push_back(calc(v,n));

    }

    for(int i = 0; i < t; i++){
        cout << s[i] << "\n";
    }


    
}

*/



//g++ -Wall -std=c++17 nombre.cpp -o nombreEjecutable
// ./ nombreEjecutable