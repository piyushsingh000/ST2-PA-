#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    map<int, int> mp;

    mp.insert(pair<int, int>(0, -1));

    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += a[i];
            if(mp.find(sum) != mp.end()){
                auto it = mp.find(sum);
                while(it != mp.end() and it->first == sum){
                    for(int k = it->second+1; k <= i; k++){
                        cout << a[k] << " ";
                    }
                    cout << endl;
                    it++;
                }
            }
        mp.insert(pair<int, int>(sum, i));        
    }

    return 0;
}