#include <bits/stdc++.h>

using namespace std;

int main(){
    long n; cin >> n;
    vector<long> num;
    for(long i = 0; i < n; i++){
        long a; cin >> a;
        num.push_back(a);
    }
    sort(num.begin(), num.end());
    map<long,long> pares;
    long cont = 0;
    pares.emplace(num[0],0);
    long aux = num[0];
    cout << num[0] << " ";
    for(long i = 1; i < num.size(); i++){
        cout << num[i] << " ";
        if(aux < num[i]){ // cont = 1 cont = 2 cont = 3
            cont++;
            pares[num[i]] = cont;
            aux = num[i];
        } else {
            cont++;
        }
    }
    cout << endl;
    for(long i = 0; i < num.size(); i++){
        cout << pares[num[i]] << " ";
    }
    return 0;
}