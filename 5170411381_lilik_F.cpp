#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void inisialisasi();
void push();
void pop();
void clear();

#define MAX_STACK 10
typedef struct STACK

{ int top;
char data[10][10];};
STACK tumpuk;

void inisialisasi()
{ tumpuk.top= -1;}

int IsFull() {
     if(tumpuk.top== MAX_STACK-1) return 1;

     else return 0;}

int IsEmpty() {
     if(tumpuk.top== -1) return 1;

     else return 0;}

void Push(char d[10]) {
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d); }

void Pop() {
    printf("Elemen terakhir stack sudah dihapus, yaitu : %s\n",tumpuk.data [tumpuk.top]);

    tumpuk.top--; }

void Clear() { tumpuk.top=-1;
}
 void TampilStack() {
     for(int i=tumpuk.top;i>=0;i--)
        {
             printf("Data : %s\n",tumpuk.data[i]);
    }
 }
 int main()
 {
     int pil;
     inisialisasi();
     char dt[10] ,pos[20];
do{
 system("cls");
    printf("PILIHAN PROSES\n");
    printf("[1] Masukan Data\n");
    printf("[2] Hapus Data\n");
    printf("[3] Tampil Isi Stack\n");
    printf("[4] Mereset Stack\n");
    printf("[5] Keluar\n");
    printf("Masukan kode pilihan (1 ... 5) : ");
scanf("%d",&pil);

    switch(pil) {
    case 1:
        if(IsFull() != 1)
        {
        printf("Nama = ");
                scanf("%s",dt);
            Push(dt);
        printf("Posisi =");
                scanf("%s",pos);
            Push(pos);
        }
        else
            printf("\nSudah penuh, push gagal!\n");
        break;
    case 2:
        if(IsEmpty() != 1)
            Pop();
        else  printf("\nMasih kosong!\n");
         break;
    case 3:
             if(IsEmpty() != 1)
             TampilStack();
             else
                printf("\nStack kosong!\n");
               break;
    case 4: Clear();
            printf("\nStack sudah di hapus!\n");
            break;
                 }
        }
    while(pil!= 5);
    getch(); }
