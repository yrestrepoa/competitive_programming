#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long previo_n;
    cin>> previo_n;

    bool ok = true;

    for(long long i = 1; i < n; i ++){
        long long x;
        cin>>x;

        if(x < previo_n){
            ok = false;
        }
        previo_n = x;

    }
    if(ok) cout << "YES";
    else cout << "NO";
}
