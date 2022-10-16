// Nama        : Ni Putu Yuni Kusumayanti      //
// NIM         : 2205551033                    //
// Mata Kuliah : Algoritma dan Pemrograman (B) //

#include <stdio.h>

int main(){
	float phi, jari_jari, keliling_lingkaran, luas_lingkaran;
	phi = 3.14;
	
	printf("Masukkan Panjang Jari - Jari : ");
	scanf("%f", &jari_jari);
	
	keliling_lingkaran = 2 * phi * jari_jari;
	printf("Keliling Liangkaran adalah %f cm2\n", keliling_lingkaran);
	
	luas_lingkaran = phi * jari_jari * jari_jari;
	printf("Luas Lingkaran adalah %f cm2\n", luas_lingkaran);
	
return 0;
}

