#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suku, s1 = 0, s2, nextS;
    char ulang;
    do
    {
        system("cls");
        printf("\t\tProgram Deret Fibbonaci\n");
        printf("Nama\t: I Dewa Gde Putra Anga Biara\n");
        printf("NIM\t: 2008561105\n\n");
        printf("Masukkan nilai suku awal : ");
        scanf("%d", &s1);
        printf("Masukkan jumlah suku : ");
        scanf("%d", &suku);

        s2 = s1 + 1;
        for(int i = 0 ; i < suku ; i++)
        {
            printf(" %d", s1);
            nextS = s1 + s2;
            s1 = s2;
            s2 = nextS;
        }
        printf("\n\nApakah anda ingin mengulang? (y/n)");
        fflush(stdin);
        scanf("%c", &ulang);
    } while(ulang == 'y' || ulang == 'Y');
    return 0;
}
