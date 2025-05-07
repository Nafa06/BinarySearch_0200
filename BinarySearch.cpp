#include <iostream>
using namespace std;


int element[10];
int nPanjang;
int x;

void input()
{
    int d;
    while (true)
    {
        cout << "Masukkan banyak elemen pada Array:";
        cin >> nPanjang;
        if (nPanjang <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
        cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < nPanjang; i++) 
    {
        cout << "Data ke-" << (i + 1) << "=";
        cin >> element[i];
    }
}


