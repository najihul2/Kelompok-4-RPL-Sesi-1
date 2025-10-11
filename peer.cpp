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

int main() {
    int saldo = 0;
    int pilihan, jumlah;

    while(true) {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            cout << "Masukkan jumlah setor: ";
            cin >> jumlah;
            setorUang(saldo, jumlah);
            break;
            case 2:
            cout << "Masukkan jumlah tarik: ";
            cin >> jumlah;
            tarikUang(saldo, jumlah);
            break;
            case 3:
            lihatSaldo(saldo);
            break;
            case 4:
            cout << "Terima kasih telah menggunakan program tabungan." << endl;
            return 0;
            default:
            cout << "Pilihan tidak valid!" << endl;
        }
    }
}
