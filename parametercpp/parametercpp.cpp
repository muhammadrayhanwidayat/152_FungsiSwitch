#include <iostream>
using namespace std;

int luas;

void prosedurLuas(int p, int l) {
    luas = p * l;
}

int fungsiLuas(int p, int l) {
    return p * l;
}


int main()
{
    int panjang, lebar;
    cout << "masukan panjang";
    cin >> panjang;
    cout << "masukan lebar";
    cin >> lebar;

    prosedurLuas(panjang, lebar);
    cout << "luas persegi panjang dengan prosedur :" << luas << endl;

    cout << "luas persegi panjang dengan fungsi :" << fungsiLuas(panjang, lebar) << endl;

    return 0;
   
}

