// Nama        : Ni Putu Yuni Kusumayanti      //
// NIM         : 2205551033                    //
// Mata Kuliah : Algoritma dan Pemrograman (B) //

#include <stdio.h>

void keliling_lingkaran(void);
void luas_lingkaran(void);

int main(void){
	keliling_lingkaran();
	luas_lingkaran();

return(0);
}

void keliling_lingkaran(void){
	printf("Jika Panjang Jari - Jari Lingkaran 7 cm\n");
	printf("Dengan rumus keliling lingkaran = 2 * phi * jari - jari\n");
	printf("Maka, Keliling Lingkaran tersebut adalah 43.960003 cm2\n\n");

}

void luas_lingkaran(void){
	printf("Jika Panjang Jari - Jari Lingkaran 7 cm\n");
	printf("Dengan rumus luas lingkaran = phi * jari_jari * jari_jari\n");
	printf("Maka, Luas Lingkaran tersebut adalah 153.860016 cm2");
	
}

