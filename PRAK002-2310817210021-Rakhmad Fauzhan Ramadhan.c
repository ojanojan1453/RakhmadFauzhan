#include <stdio.h>

int main() {
    char *time[] = {"Pagi", "Siang", "Malam"};
    
    for (int i = 0; i < 3; i++) {
        printf("Selamat %s, Nama Anda\n", time[i]);
    }
    
    return 0;
}