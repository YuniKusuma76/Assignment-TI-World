#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void identitas();
void menu();
void perulangan();
void luas_permukaan_kubus(void);
void volume_kubus(void);
void skala(void);
void keliling_lingkaran(void);
void luas_lingkaran(void);




void identitas(){
	printf("\t\t\t\t ================================================\n");
	printf("\t\t\t\t|->>             IDENTITAS DIRI               <<-|\n");
	printf("\t\t\t\t|------------------------------------------------|\n");
	printf("\t\t\t\t| Nama          : Ni Putu Yuni Kusumayanti       |\n");
	printf("\t\t\t\t| NIM           : 2205551033                     |\n");
	printf("\t\t\t\t| Mata Kuliah   : Algoritma dan Pemrograman (B)  |\n");
	printf("\t\t\t\t|------------------------------------------------|\n");
	printf("\t\t\t\t ================================================\n");
	printf("\t\t\t\t Tekan Tombol Enter untuk Lanjut...");
	getchar();
	menu();
}

void menu(){
	int pilihan;
	
	system("cls");
	printf("\t\t\t\t ===============================================\n");
	printf("\t\t\t\t|->>              Kode Program               <<-|\n");
	printf("\t\t\t\t|-----------------------------------------------|\n");
	printf("\t\t\t\t| 1. Luas Permukaan Kubus                       |\n");
	printf("\t\t\t\t| 2. Volume Kubus                               |\n");
	printf("\t\t\t\t| 3. Skala                                      |\n");
	printf("\t\t\t\t| 4. Keliling Lingkaran                         |\n");
	printf("\t\t\t\t| 5. Luas Lingkaran                             |\n");
	printf("\t\t\t\t| 0. Keluar                                     |\n");
	printf("\t\t\t\t|-----------------------------------------------|\n");
	printf("\t\t\t\t ===============================================\n");
	printf("\n\t\t\t\t Masukkan Pilihan Anda : ");
	scanf("%d", &pilihan);
	
	system("cls");
	switch(pilihan){
			case 1: luas_permukaan_kubus(); system("pause");
					perulangan();
					break; 
			case 2: volume_kubus(); system("pause");
					perulangan(); 
					break; 
			case 3: skala(); system("pause");
					perulangan(); 
					break;
			case 4: keliling_lingkaran(); system("pause");
					perulangan(); 
					break;
			case 5: luas_lingkaran(); system("pause");
					perulangan(); 
					break;
			case 0: printf("Terimakasih, Sampai Jumpa!\n");
					exit(1);
					break;
	}
}

void perulangan(){
	double reset;
	system("cls");
	
	printf("\t\t\t\t ________________________________\n");
	printf("\t\t\t\t|--------------------------------|\n");
	printf("\t\t\t\t| =>> Ingin Menghitung Kembali?  |\n\n");
	printf("\t\t\t\t|--------------------------------|\n");
	printf("\t\t\t\t| 1. Kembali Menghitung          |\n");
	printf("\t\t\t\t| 2. Keluar program              |\n");
	printf("\t\t\t\t|________________________________|\n");
	printf("\t\t\t\t Masukkan Pilihan : ");
	scanf("%lf",&reset);
    getchar();
    
	if(reset==1){
		system("cls");
		main();
	}else if(reset==2) {
        system("cls");
		printf("Terimakasih, Sampai jumpa!");
        getchar();
        exit(1);
    }
}

int main(){
	system("cls");
	identitas();
	system("pause");
	menu();
	perulangan();
	luas_permukaan_kubus();
	volume_kubus();
	skala();
	keliling_lingkaran();
	luas_lingkaran();

return 0;
}



void luas_permukaan_kubus(void){
	int sisi, luas_permukaan_kubus;
	
	printf("\t\t\t\t ___________________________________________________________________\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>              Menghitung Luas Permukaan Kubus              <<= |\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Panjang Sisi Kubus : ");
	scanf("%d", &sisi);
	printf("\t\t\t\t|===================================================================|\n");
	luas_permukaan_kubus = 6 * (sisi * sisi);
	printf("\t\t\t\t  Luas Permukaan Kubus = %d cm2\n", luas_permukaan_kubus);
	printf("\t\t\t\t|___________________________________________________________________|\n");
	
	system("pause");
	printf("\t\t\t\t ___________________________________________________________________\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                Fungsi Luas Permukaan Kubus                <<= |\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Jika panjang sisi kubus adalah %d cm\n", sisi);
	printf("\t\t\t\t  Dengan rumus Luas Permukaan Kubus = 6 * (sisi * sisi)\n");
	printf("\t\t\t\t  Maka, Luas Permukaan Kubusnya adalah %d cm2\n\n", luas_permukaan_kubus);
	printf("\t\t\t\t|___________________________________________________________________|\n");
}

void volume_kubus(void){
	int sisi, volume_kubus;
	
	printf("\t\t\t\t ___________________________________________________________________\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                  Menghitung Volume Kubus                  <<= |\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Panjang Sisi Kubus : ");
	scanf("%d", &sisi);
	printf("\t\t\t\t|===================================================================|\n");
	volume_kubus = sisi * sisi * sisi;
	printf("\t\t\t\t  Volume Kubus = %d cm2\n", volume_kubus);
	printf("\t\t\t\t|___________________________________________________________________|\n");
	
	system("pause");
	printf("\t\t\t\t ___________________________________________________________________\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                    Fungsi Volume Kubus                    <<= |\n");
	printf("\t\t\t\t|-------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Jika panjang sisi kubus adalah %d cm\n", sisi);
	printf("\t\t\t\t  Dengan rumus Volume Kubus = sisi * sisi * sisi\n");
	printf("\t\t\t\t  Maka, Volume Kubusnya adalah %d cm2\n\n", volume_kubus);
	printf("\t\t\t\t|___________________________________________________________________|\n");	
}

void skala(void){
	int pilihan, jarak_peta, jarak_sebenarnya, skala;
	
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                     Menghitung Skala                     <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Jarak pada Peta(cm) : ");
	scanf("%d", &jarak_peta);
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Jarak Sebenarnya(km) : ");
	scanf("%d", &jarak_sebenarnya);
	skala = jarak_peta / jarak_sebenarnya;
	printf("\t\t\t\t Skala = 1 : %d km\n", skala);
	printf("\t\t\t\t|__________________________________________________________________|\n");
	
	system("pause");
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                       Fungsi Skala                       <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Jika jarak pada peta adalah %d cm\n", jarak_peta);
	printf("\t\t\t\t  Dan, jarak sebenarnya adalah %d km\n", jarak_sebenarnya);
	printf("\t\t\t\t  Dengan rumus skala = jarak_peta / jarak_sebenarnya\n");
	printf("\t\t\t\t  Maka, Skalanya adalah 1 : %d km\n", skala);
	printf("\t\t\t\t|__________________________________________________________________|\n");
}

void keliling_lingkaran(void){
	float pilihan, phi, jari_jari, keliling_lingkaran;
	phi = 3.14;
	
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                Menghitung Keliling Lingkaran             <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Panjang Jari - Jari : ");
	scanf("%f", &jari_jari);
	printf("\t\t\t\t|==================================================================|\n");
	keliling_lingkaran = 2 * phi * jari_jari;
	printf("\t\t\t\t  Keliling Liangkaran adalah %f cm2\n", keliling_lingkaran);
	printf("\t\t\t\t|__________________________________________________________________|\n");
	
	system("pause");
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                  Fungsi Keliling Lingkaran               <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Jika Panjang Jari - Jari Lingkaran %f cm\n", jari_jari);
	printf("\t\t\t\t  Dengan rumus keliling lingkaran = 2 * phi * jari - jari\n");
	printf("\t\t\t\t  Maka, Keliling Lingkaran tersebut adalah %f cm2\n\n", keliling_lingkaran);
	printf("\t\t\t\t|__________________________________________________________________|\n");
}

void luas_lingkaran(void){
	float pilihan, phi, jari_jari, luas_lingkaran;
	phi = 3.14;
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                  Menghitung Luas Lingkaran               <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Masukkan Panjang Jari - Jari : ");
	scanf("%f", &jari_jari);
	printf("\t\t\t\t|==================================================================|\n");
	luas_lingkaran = phi * jari_jari * jari_jari;
	printf("\t\t\t\t  Luas Lingkaran adalah %f cm2\n", luas_lingkaran);
	printf("\t\t\t\t|__________________________________________________________________|\n");
	
	system("pause");
	printf("\t\t\t\t __________________________________________________________________\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t| =>>                    Fungsi Luas Lingkaran                 <<= |\n");
	printf("\t\t\t\t|------------------------------------------------------------------|\n");
	printf("\t\t\t\t  Jika Panjang Jari - Jari Lingkaran %f cm\n", jari_jari);
	printf("\t\t\t\t  Dengan rumus Luas Lingkaran = phi * jari_jari * jari_jari\n");
	printf("\t\t\t\t  Maka, Luas Lingkaran tersebut adalah %f cm2\n\n", luas_lingkaran);
	printf("\t\t\t\t|__________________________________________________________________|\n");
}
