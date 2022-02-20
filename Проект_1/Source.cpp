#include <iostream>
#include <ctime>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    cout << (90 ^ 26)+0x51 << endl << (42 | 11)+0x7A << endl << (22 ^ 10)+0x6B << endl;
    cout << (53^9)+0x72 << endl<<(86^19)+0x68 << endl << (37&26)<< endl;
    cout << (34^2) +0x6E<< endl << ((50|90)+28)+0x4F << endl << (7<<3)+0x76 << endl;
    cout << (53^30) +0x67<< endl << (68|18)+0x45 << endl;

}