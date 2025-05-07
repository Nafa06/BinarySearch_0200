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

void displayDataTerurut()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
}


void binarySearch()
{
    char ulang;
    do
    {
        cout << "\n========================================\n"; 
        cout << "          Pencarian Binary Search        \n";
        cout << "========================================\n";
        cout << "Masukkan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0; 
        int high = nPanjang - 1;

        do 
        {
            int mid = (low + high) / 2;
            if (element[mid] == x)
            {
                cout << "\n[✓] Elemen " << x << " ditemukan pada indeks " << mid << ".\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
        {
            cout << "\n[x] Elemen " << x << " tidak ditemukan dalam array.\n";
        }

        cout << "\nIngin mencari lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

