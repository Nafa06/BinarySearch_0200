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

void bubbleSortArray()
{
    int turn = 1; // step 1
    do
    {
        for (int j = 0; j <= nPanjang - 1 - turn; j++)
        { // step 2
            if (element[j] > element[j + 1])
            { // step 3
                int temp;
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        turn = turn + 1; // step 4
    } while (turn <= nPanjang - 1); // step 5
}
