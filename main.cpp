#include <iostream>
using namespace std;

int main() {

    int n, a, b, c,i ;

    cin >> n ;

    if (n >= 2){
        for ( i = 0 ; i < n ; i++ ){
            c = a + b;
            b=a;
            a=c;
            cout << c << endl;
        }
    }else {
        cout << "errore" << endl;
    }
    return 0;
}
