#include <iostream>
using namespace std;

int pokok(int);
float lembur(float);
int makan(int);
int transport(int);

int main(){
    int nip,jam;
    string nama;
    cout << "Masukkan NIP : ";
    cin >> nip;
    cout << "Masukkan nama : ";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja :";
    cin >> jam;
    cout << "NIP: " << nip << endl << "Nama: " << nama << endl << "Gaji Pokok: " << pokok(jam) << endl;
    cout << "Lembur: " << lembur(jam) << endl;
    cout << "Uang Makan: " << makan(jam) << endl;
    cout << "Transport: " << transport(jam);
    return 0;
}

int pokok(int jam){
    if (jam <= 8) {
        return(jam*7500);
    } else if(jam > 8) {
        return(8*7500);
    }
}

float lembur(float jam){
    if (jam > 8) {
        return((jam-8)*(7500*1.5));
    } else {
        return 0;
    }
}

int makan(int jam){
    if (jam >= 9) {
        return(10000);
    } else {
        return 0;
    }
}

int transport(int jam){
    if (jam >= 10) {
        return(13000);
    } else {
        return 0;
    }
}
