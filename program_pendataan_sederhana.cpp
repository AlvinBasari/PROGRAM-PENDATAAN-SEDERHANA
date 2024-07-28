//PROGRAM SEDERHANA UNTUK PENDATAAN MENGUNAKAN ARRAY DAN LOOPING
// MAKSIMAL 5 DATA DENGAN ISIAN NAMA,ALAMAT, DAN NOMOR HANDPPHONE

//TUGAS_ARLOGORITMA_DAN_PEMOGRAMAN
//ALVIN_BASARI_NIM_2355201018
//3_JULI_2024

#include <iostream>
#include <stdio.h>
#include <conio.h>

int main() {
    char names[5][50]; // Array untuk menyimpan nama
    char addresses[5][100]; // Array untuk menyimpan alamat
    char phones[5][20]; // Array untuk menyimpan nomor handphone
    int numPeople = 0; // jumlah data orang yang dimasukan (maks 5)

    clrscr();

    // looping untuk input data orang berjumlah maksimal 5 orang
    while (numPeople < 5) {
        clrscr();
        cout << "ISI DATA DENGAN LENGKAP!\n";
        cout << "========================\n";
        cout << "Data " << (numPeople + 1) << "\n";

        // Input nama dan memasukan nama ke dalam array names
        cout << "Masukan nama    : ";
        cin.getline(names[numPeople], sizeof(names[numPeople]));

        // Input alamat dan memsukan alamat ke dalam array addresses
        cout << "Masukan alamat  : ";
        cin.getline(addresses[numPeople], sizeof(addresses[numPeople]));

        // Input nomor telepon dan memasukan nomor ke dalam araay phones
        cout << "Masukan nomor Hp: (+62) ";
        cin.getline(phones[numPeople], sizeof(phones[numPeople]));

        numPeople++; // menambah jumlah data (maks 5)

        // kode untuk berhenti atau lanjut menambah data(hanya berlaku sampai data ke-4)
        if (numPeople < 5) {
            cout << "\nApakah anda ingin menambah data baru? (Y/N): ";
            char choice;
            cin >> choice;
            cin.ignore();

            if (choice == 'N' || choice == 'n') {
                break; // berhenti menambah data dan kemudian menampilkan output
            }
        }
    }

    // menampilkan data
    clrscr();

    cout << "===========================\n";
    cout << "PROGRAM PENDATAAN SEDERHANA\n";
    cout << "===========================\n";

    // looping untuk output program
    for (int i = 0; i < numPeople; ++i) {
        printf("\nData %d\n", (i + 1));
        printf("Nama  : %s\n", names[i]);
        printf("Alamat: %s\n", addresses[i]);
        printf("No Hp : (+62) %s\n", phones[i]);
    }

    // Copyright
    cout << "\n\nCopyright © 2024 Alvin Basari. All rights reserved.";

    // tombol exit user
    cout << "\nPress any key to exit...";
    getch();
    return 0;
}

