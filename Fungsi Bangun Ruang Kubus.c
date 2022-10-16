// Nama        : Ni Putu Yuni Kusumayanti      //
// NIM         : 2205551033                    //
// Mata Kuliah : Algoritma dan Pemrograman (B) //

#include <stdio.h>

void luas_permukaan_kubus(void);
void volume_kubus(void);

int main(void){
	luas_permukaan_kubus();
	volume_kubus();
	return 0;
}

void luas_permukaan_kubus(){
	printf("Jika panjang sisi kubus adalah 10 cm\n");
	printf("Dengan rumus Luas Permukaan Kubus = 6 * (sisi * sisi)\n");
	printf("Maka, Luas Permukaan Kubusnya adalah 600 cm2\n\n");
	
}

void volume_kubus(){
	printf("Jika panjang sisi kubus adalah 10 cm\n");
	printf("Dengan rumus Volume Kubus = sisi * sisi * sisi\n");
	printf("Maka, Volume Kubusnya adalah 1000 cm3\n");
	
}

