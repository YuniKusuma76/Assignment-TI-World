// Nama        : Ni Putu Yuni Kusumayanti      //
// NIM         : 2205551033                    //
// Mata Kuliah : Algoritma dan Pemrograman (B) //

#include<stdio.h>

int main(){
	//Rumus Skala
	printf("Perhitungan Skala \n\n");
	
	//Deklarasi Variabel
	int jarak_peta, jarak_sebenarnya, skala;
	
		printf("masukkan jarak pada peta(cm) : ");
		scanf("%d", &jarak_peta);
		
		printf("masukkan jarak sebenarnya(km) : ");
		scanf("%d", &jarak_sebenarnya);
	
	//Perhitungan Skala
	skala = jarak_peta / jarak_sebenarnya;
	printf("skala = 1 : %d", skala);
	
return 0;
		
}

