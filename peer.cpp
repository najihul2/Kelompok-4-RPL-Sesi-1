#include <iostream>
using namespace std;

void tampilkanMenu() {
    cout << "=== MENU TABUNGAN ===" << endl;
    cout << "1. Setor Uang" << endl;
    cout << "2. Tarik Uang" << endl;
    cout << "3. Lihat Saldo" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih menu: ";
    }
void setorUang(int &saldo, int jumlah) {
    saldo += jumlah;
    cout << "Berhasil menyetor Rp" << jumlah << endl;
}
void tarikUang(int &saldo, int jumlah) {
    if (jumlah > saldo) {
        cout << "Saldo tidak mencukupi!" << endl;
    } else {
        saldo -= jumlah;
        cout << "Berhasil menarik Rp" << jumlah << endl;
    }
}
void lihatSaldo(int saldo) {
    cout << "Saldo anda saat ini: Rp" << saldo << endl;
}
    
    cout << "Pilihan tidak valid!" << endl;
    return 0;
}
