#include <iostream> 
#include <vector>
#include <map>
#include <set>
using namespace std; // ini buat tidak perlu menulis std:: nya lagi

int main () {
    // variabel dan input
    int n;
    cin >> n;

    // vector untuk simpan posisi dan kategori paket
    vector<long long> x(n);
    vector<long long> c(n);

    // membaca posisi dan kategori paket satu per satu
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    set<long long> kategori;

    for(int i = 0; i < n; i++) {
        kategori.insert(c[i]);
    }
    
    // output
    cout << kategori.size() << endl;

    return 0;
}
