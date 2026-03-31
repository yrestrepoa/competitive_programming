#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>> n;

    for ( long long i = 0; i < n; i ++){
        long long x;
        cin>>x;
        
        
        long long suma = x;
        long long maximo = x;

        
        if (suma < 0){
            suma = x;
        } else {
            suma+=x;
        }
        if (suma  > maximo) {
            maximo = suma;
        }
    }
    cout << maximo << endl;
    return 0;
}
