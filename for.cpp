#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    string pass, user;
    char i;

    do {
        system("cls");
        cout << "Masukkan Password: \n";
        cin >> pass;
        cout << "Masukkan Username: \n";
        cin >> user;

        if(pass!="smkti21" && user!="123abc") {
            cout << "Password dan Username salah" << endl;
        } else if(pass!="smkti21" && user=="123abc") {
            cout << "Password salah!" << endl;
        } else if(pass=="smkti21" && user!="123abc") {
            cout << "Username salah!" << endl;
        } else {
        cout << "ANGKA GANJIL & GENAP\n";
        cout << "1. Ganjil\n";
        cout << "2. Genap\n";
        cout << "Masukkan Angka: \n";
        cin >> a;
        system("cls");
        if(a==1) {
            cout << "Masukkan Angka Akhir: \n";
            cin >> b;
            cout << "____________________\n";
            for(c = 1;c <= b;c += 2)
            cout << " " << c << endl;
        } else if(a==2) {
            cout << "Masukkan Angka Akhir: \n";
            cin >> b;
            cout << "____________________\n";
            for(c = 2;c <= b;c += 2)
            cout << " " << c << endl;
        } else
        cout << "Pilihan Tidak ada!\n";
    }
        cout << endl;
        cout << "Input data lagi?(y/n): \n";
        cin >> i;
        system("cls");
    }
    while(i=='y');
    cout << "Tekan Enter untuk keluar!\n";
    return 0;
}