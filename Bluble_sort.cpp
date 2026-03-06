#include <iostream>
using namespace std;

int a[20];
int n;

void input()
{
    while (true)
    {
        cout<< "Masukan panjang array : ";
        cin >> n;

        if (n <=20)
        {
            break;
        }
            else
        {
            cout << "Error : Maksimal input array adalah 20\n";
        }
    }
    

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) // i++ / i = + 1
    {
        cout << "Masukan Nilai ke - " << i + 1 << " : ";
        cin >> a[i];
    }
}

void display ()
{
    cout << endl;
    cout << "==========================" << endl;
    cout << "Elemen Array telah terurut" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke - " << i + 1 << " : ";

    }
}

void bubbleSort()
{
    cout << "\n=================" << endl;
    cout << "\nHasil Setiap Pass" << endl;
    cout << "\n=================" << endl;
    
}