// by viberunner

// http://www.cs.put.poznan.pl/arybarczyk/7.pdf 7.1.18
// polecenie do zadania nie było dobrze wyjaśnione
// ale zakładając, że program ma wypisywać dla wartości 5:
//
// 2,
// 4,5
// 8,9,10
// 16,17,18,19
// 32,33,34,35,36
//
//  |                    -> w bok o jeden więcej liczb w kolejności
// \|/ w dół potęgi liczby 2

#include <iostream>
using namespace std;

int main(){

        int h;
        cin >> h;
        int now = 1;

	cout << endl;

        for (int i = 0; i < h; i++){

                now *= 2;

                for (int row = 0; row <= i; row++){

                        cout << (now + row) << ',';

                }

                cout << endl;

        }

        return 0;
}
