#include <iostream>
using namespace std;

// LOGIN
bool loginUser();

// BANGUN DATAR
float SegiTiga (int Alas, int Tinggi);
float Persegi (int Sisi);
float PersegiPanjang (int Panjang, int Lebar);
float Lingkaran (int Jari_Jari);
float JajarGenjang (int Alas, int Tinggi);
float BelahKetupat (int Diagonal1, int Diagonal2);

// GANJIL GENAP
void tampilGanjil (int batas);
void tampilGenap (int batas);

// TAHUN KABISAT
bool ThKabisat (int tahun);

// NILAI AKHIR SISWA
float NilaiSiswa (int Tugas, int UTS, int UAS);

// KONVERSI SUHU
float CelciusToFahrenheit (float celcius);
float CelciusToKelvin (float celcius);
float CelciusToReamur (float celcius);
float FahrenheitToCelcius (float fahrenheit);
float FahrenheitToKelvin (float fahrenheit);
float FahrenheitToReamur (float fahrenheit);
float KelvinToCelcius (float kelvin);
float KelvinToFahrenheit (float kelvin);
float KelvinToReamur (float kelvin);
float ReamurToCelcius (float reamur);
float ReamurToFahrenheit (float reamur);
float ReamurToKelvin (float reamur);

int main() {
    int menu, menu1, menu2, menu3;
    int a,b,c;
    int celcius, fahrenheit, kelvin, reamur;
    float Nilai, Nilai1, Suhu;
    string pass, user;
    char ulang;
    bool login = false;

    do {
        system ("cls");
        login = loginUser();
        system ("pause");
    } while (!login);
    
    do {
        system ("cls");
            cout << "___SELAMAT DATANG!___\n";
            cout << "===MENU PROGRAM===\n";
            cout << "1. Luas Bangun Datar\n";
            cout << "2. Bilangan Ganjil/Genap\n";
            cout << "3. Tahun Kabisat!\n";
            cout << "4. Nilai Akhir Siswa\n";
            cout << "5. Konversi Suhu\n";
            cout << "6. Keluar!\n";
            cout << "Tentukan Pilihan(1-5): \n";
            cin >> menu;

            system ("cls");
            
            switch (menu) {
                case 1:
                cout << "__LUAS BANGUN DATAR__\n";
                cout << "1. Segi Tiga\n";
                cout << "2. Persegi\n";
                cout << "3. Persegi Panjang\n";
                cout << "4. Lingkaran\n";
                cout << "5. Jajar Genjang\n";
                cout << "6. Belah Ketupat\n";
                cout << "7. Keluar!\n";
                cout << "Pilihan Luas: \n";
                cin >> menu1;
                
                system ("cls");

                switch (menu1) {
                    case 1:
                    cout << "MENGHITUNG LUAS SEGITIGA\n";
                    cout << "Masukkan Alas: \n";
                    cin >> a;
                    cout << "Masukkan Tinggi: \n";
                    cin >> b;
                    Nilai = SegiTiga(a, b);
                    cout << "LUAS SEGITIGA: " << Nilai << endl;
                    break;

                    case 2:
                    cout << "MENGHITUNG LUAS PERSEGI\n";
                    cout << "Masukkan Sisi: \n";
                    cin >> a;
                    Nilai = Persegi(a);
                    cout << "LUAS PERSEGI: " << Nilai << endl;
                    break;

                    case 3:
                    cout << "MENGHITUNG LUAS PERSEGI PANJANG\n";
                    cout << "Masukkan Panjang: \n";
                    cin >> a;
                    cout << "Masukkan Tinggi: \n";
                    cin >> b;
                    Nilai = PersegiPanjang(a, b);
                    cout << "LUAS PERSEGI PANJANG: " << Nilai << endl;
                    break;
                    
                    case 4:
                    cout << "MENGHITUNG LUAS LINGKARAN\n";
                    cout << "MAsukkan Jari-Jari: \n";
                    cin >> a;
                    Nilai = Lingkaran(a);
                    cout << "LUAS LINGKARAN: " << Nilai << endl;
                    break;

                    case 5:
                    cout << "MENGHITUNG LUAS JAJAR GENJANG\n";
                    cout << "Masukkan Alas: \n";
                    cin >> a;
                    cout << "Masukkan Tinggi: \n";
                    cin >> b;
                    Nilai = JajarGenjang(a, b);
                    cout << "LUAS JAJAR GENJANG: " << Nilai << endl;
                    break;

                    case 6:
                    cout << "MENGHITUNG LUAS BELAH KETUPAT\n";
                    cout << "Nilai Diagonal 1: \n";
                    cin >> a;
                    cout << "Nilai Diagonal 2: \n";
                    cin >> b;
                    Nilai = BelahKetupat(a, b);
                    cout << "LUAS BELAH KETUPAS: " << Nilai << endl;
                    break;

                    case 7:
                    cout << "PROGRAM SELESAI...\n";
                    cout << "SEMOGA MEMBANTU!🙌\n";
                    system ("pause");
                    break;

                    default:
                    cout << "Pilihan Tidak Ada!!\n";
                    break;

                }
                break;

                case 2:
                cout << "==BILANGAN GANJIL/GENAP==\n";
                cout << "1. Bilangan Ganjil\n";
                cout << "2. Bilangan Genap\n";
                cout << "3. Keluar!\n";
                cout << "Pilihan Bilangan: \n";
                cin >> menu2;

                switch (menu2) {
                    case 1:
                    cout << "BILANGAN GANJIL!\n";
                    cout << "Input Angka Terakhir: \n";
                    cin >> a;
                    tampilGanjil(a);
                    break;

                    case 2:
                    cout << "BILANGAN GENAP!\n";
                    cout << "Input Angka Terakhir: \n";
                    cin >> a;
                    tampilGenap(a);
                    break;

                    case 3:
                    cout << "PROGRAM SELESAI...\n";
                    cout << "SEMOGA MEMBANTU!🙌\n";
                    system ("pause");
                    break;

                    default:
                    cout << "Pilihan Tidak Ada!!\n";
                    break;
                }
                break;

                case 3:
                cout << "==TAHUN KABISAT==\n";
                cout << "Masukkan Tahun: \n";
                cin >> a;
                if (ThKabisat(a)) {
                    cout << a << " Adalah Tahun Kabisat!\n";
                } else {
                    cout << a << " Bukan Tahun Kabisat!\n";
                }
                break;

                case 4:
                cout << "==NILAI AKHIR SISWA==\n";
                cout << "Masukkan Nilai Tugas: \n";
                cin >> a;
                cout << "Masukkan Nilai UTS: \n";
                cin >> b;
                cout << "Masukkan Nilai UAS: \n";
                cin >> c;
                Nilai1 = NilaiSiswa(a, b, c);
                cout << "Nilai Akhir Siswa: " << Nilai1 << endl;
                break;

                case 5:
                cout << "==KONVERSI SUHU==\n";
                cout << "1. Celcius\n";
                cout << "2. Fahrenheit\n";
                cout << "3. Kelvin\n";
                cout << "4. Reamur\n";
                cout << "SUHU AWAL: \n";
                cin >> a;
                system ("cls");

                switch(a) {
                    case 1:
                    cout << "==KONVERSI CELCIUS==\n";
                    cout << "1. Fahrenheit\n";
                    cout << "2. Kelvin\n";
                    cout << "3. Reamur\n";
                    cout << "Konversi ke-: \n";
                    cin >> b;
                    
                    if (b==1) {
                        cout << "Suhu Celcius: \n";
                        cin >> celcius;
                        Suhu = CelciusToFahrenheit(celcius);
                        cout << "Hasil Konversi: " << Suhu << " Fahrenheit" << endl;
                    } else if (b==2) {
                        cout << "Suhu Celcius: \n";
                        cin >> celcius;
                        Suhu = CelciusToKelvin(celcius);
                        cout << "Hasil Konversi: " << Suhu << " Kelvin" << endl;
                    } else if(b==3) {
                        cout << "Suhu Celcius: \n";
                        cin >> celcius;
                        Suhu = CelciusToReamur(celcius);
                        cout << "Hasil Konversi: " << Suhu << " Reamur" << endl;
                    } else {
                        cout << "Pilihan Tidak Ada!\n";
                    }
                    break;

                    case 2:
                    cout << "==KONVERSI FAHRENHEIT==\n";
                    cout << "1. Celcius\n";
                    cout << "2. Kelvin\n";
                    cout << "3. Reamur\n";
                    cout << "Konversi ke-: \n";
                    cin >> b;

                    if (b==1) {
                        cout << "Suhu Fahrenheit: \n";
                        cin >> fahrenheit;
                        Suhu = FahrenheitToCelcius(fahrenheit);
                        cout << "Hasil Konversi: " << Suhu << " Celcius" << endl;
                    } else if (b==2) {
                        cout << "Suhu Fahrenheit: \n";
                        cin >> fahrenheit;
                        Suhu = FahrenheitToKelvin(fahrenheit);
                        cout << "Hasil Konversi: " << Suhu << " Kelvin" << endl;
                    } else if(b==3) {
                        cout << "Suhu Fahrenheit: \n";
                        cin >> fahrenheit;
                        Suhu = FahrenheitToReamur(fahrenheit);
                        cout << "Hasil Konversi: " << Suhu << " Reamur" << endl;
                    } else {
                        cout << "Pilihan Tidak Ada!\n";
                    }
                    break;

                    case 3:
                    cout << "==KONVERSI KELVIN==\n";
                    cout << "1. Celcius\n";
                    cout << "2. Fahrenheit\n";
                    cout << "3. Reamur\n";
                    cout << "Konversi ke-: \n";
                    cin >> b;
                    
                    if (b==1) {
                        cout << "Suhu Kelvin: \n";
                        cin >> kelvin;
                        Suhu = KelvinToCelcius(kelvin);
                        cout << "Hasil Konversi: " << Suhu << " Celcius" << endl;
                    } else if (b==2) {
                        cout << "Suhu Kelvin: \n";
                        cin >> kelvin;
                        Suhu = KelvinToFahrenheit(kelvin);
                        cout << "Hasil Konversi: " << Suhu << " Fahrenheit" << endl;
                    } else if(b==3) {
                        cout << "Suhu Kelvin: \n";
                        cin >> kelvin;
                        Suhu = KelvinToReamur(kelvin);
                        cout << "Hasil Konversi: " << Suhu << " Reamur" << endl;
                    } else {
                        cout << "Pilihan Tidak Ada!\n";
                    }
                    break;

                    case 4:
                    cout << "==KONVERSI REAMUR==\n";
                    cout << "1. Celcius\n";
                    cout << "2. Fahrenheit\n";
                    cout << "3. Kelvin\n";
                    cout << "Konversi ke-: \n";
                    cin >> b;

                    if (b==1) {
                        cout << "Suhu Reamur: \n";
                        cin >> reamur;
                        Suhu = reamur * 5.0/4;
                        cout << "Hasil Konversi: " << Suhu << " Celcius" << endl;
                    } else if (b==2) {
                        cout << "Suhu Reamur: \n";
                        cin >> reamur;
                        Suhu = ReamurToFahrenheit(reamur);
                        cout << "Hasil Konversi: " << Suhu << " Fahrenheit" << endl;
                    } else if(b==3) {
                        cout << "Suhu Reamur: \n";
                        cin >> reamur;
                        Suhu = ReamurToKelvin(reamur);
                        cout << "Hasil Konversi: " << Suhu << " Kelvin" << endl;
                    } else {
                        cout << "Pilihan Tidak Ada!\n";
                    }
                    break;
                }

            }
            cout << "Input data lagi(y/t): \n";
            cin >> ulang;
    }
    while (ulang == 'y');
    cout << "Tekan Enter untuk keluar!..\n";
    system ("pause");
    return 0;

}
bool loginUser() {
    string pass, user;

    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (user == "123" && pass == "SMK") {
        cout << "LOGIN BERHASIL!\n";
        return true;
    }

    cout << "LOGIN GAGAL!\n";
    return false;
}

float SegiTiga(int Alas, int Tinggi) {
    return (Alas * Tinggi) / 2;
}

float Persegi (int Sisi) {
    return Sisi * Sisi;
}

float PersegiPanjang (int Panjang, int Lebar) {
    return Panjang * Lebar;
}

float Lingkaran (int Jari_Jari) {
    const float phi = 3.14;
    return phi * Jari_Jari * Jari_Jari;
}

float JajarGenjang (int Alas, int Tinggi) {
    return Alas * Tinggi;
}

float BelahKetupat (int Diagonal1, int Diagonal2) {
    return (Diagonal1 * Diagonal2) / 2;
}

void tampilGanjil (int batas) {
    for(int c = 1; c <= batas; c+=2) {
        cout << " " << c << endl;
    }
}

void tampilGenap (int batas) {
    for(int c = 2; c <= batas; c+=2) {
        cout << " " << c << endl;
    }
}

bool ThKabisat (int tahun) {
    if (tahun % 400 == 0) 
        return true;
    else if (tahun % 100 == 0) 
        return false;
    else if (tahun % 4 == 0)
        return true;
        return false;
}

float NilaiSiswa (int Tugas, int UTS, int UAS) {
    return (Tugas * 0.3) + (UTS * 0.3) + (UAS * 0.4);
}

float CelciusToFahrenheit (float celcius) {
    return (celcius * 9.0/5) + 32;
}
float CelciusToKelvin (float celcius) {
    return celcius + 273;
}
float CelciusToReamur (float celcius) {
    return celcius * 4.0 / 5;
}
float FahrenheitToCelcius (float fahrenheit) {
    return (fahrenheit - 32) * 5.0/9;
}
float FahrenheitToKelvin (float fahrenheit) {
    return (fahrenheit - 32) * 5.0/9 + 273;
}
float FahrenheitToReamur (float fahrenheit) {
    return (fahrenheit - 32) * 4.0/9;
}
float KelvinToCelcius (float kelvin) {
    return kelvin - 273;
}
float KelvinToFahrenheit (float kelvin) {
    return (kelvin - 273) * 9.0/5 + 32;
}
float KelvinToReamur (float kelvin) {
    return (kelvin - 273) * 4.0/5;
}
float ReamurToCelcius (float reamur) {
    return reamur * 5.0/4;
}
float ReamurToFahrenheit (float reamur) {
    return (reamur * 9.0/4) + 32;
}
float ReamurToKelvin (float reamur) {
    return (reamur * 5.0/4) + 273;
}