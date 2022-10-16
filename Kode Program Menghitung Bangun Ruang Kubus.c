// Nama        : Ni Putu Yuni Kusumayanti      //
// NIM         : 2205551033                    //
// Mata Kuliah : Algoritma dan Pemrograman (B) //

#include<stdio.h>

int main(){
	//Rumus Luas Permukaan dan Volume Kubus
	printf("Perhitungan Luas Permukaan Kubus dan Volume Kubus \n\n");
	
	//Deklarasi Variabel
	int sisi, luas_permukaan_kubus, volume_kubus;
	
		printf("masukkan panjang sisi : ");
		scanf("%d", &sisi);
	
	//Perhitungan Luas Permukaan Kubus
	luas_permukaan_kubus = 6 * (sisi * sisi);
	printf("luas permukaan kubus = %d \n", luas_permukaan_kubus);
	
	//Perhitungan Volume Kubus
	volume_kubus = sisi * sisi * sisi;
	printf("volume kubus = %d", volume_kubus);
	
return 0;
		
}

