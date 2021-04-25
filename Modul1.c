#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nama[20];
    long no_induk;
    char kelas[1];
    char alamat[50];
    char no_hp[13];
    int d_lahir;
    char m_lahir[20];
    int y_lahir;
    int old;

    printf("\t\tSelamat Datang!\n");
    printf("Silahkan isi data-data dibawah ini untuk mendaftar!\n");
    printf("Nama\t: "); fgets(nama, sizeof(nama), stdin); fflush(stdin);
    printf("NIM\t: "); fflush(stdin); scanf("%ld", &no_induk); fflush(stdin);
    printf("Kelas\t: "); fgets(kelas, sizeof(1), stdin); fflush(stdin);
    printf("Alamat\t: "); fgets(alamat, sizeof(alamat), stdin); fflush(stdin);
    printf("No HP\t: "); fgets(no_hp, sizeof(no_hp), stdin); fflush(stdin);
    printf("Tanggal Lahir : "); fflush(stdin); scanf("%d %s %d", &d_lahir, &m_lahir, &y_lahir); fflush(stdin);
    printf("\n\n==========Terimakasih Telah Mendaftar!==========\n");

    
    old = 2021 - y_lahir;
    printf("Nama\t: %s", nama);
    printf("NIM\t: %ld\n", no_induk);
    printf("Kelas\t: %s", kelas);
    printf("Alamat\t: %s", alamat);
    printf("No HP\t: %s", no_hp);
    printf("\nTanggal Lahir : %d %s %d\n", d_lahir, m_lahir, y_lahir);
    printf("Umur\t: %d", old);


    return 0;
}
