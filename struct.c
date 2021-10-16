#include <stdio.h>

typedef struct alamat
{
	char namaJalan[30], kota[30], provinsi[30];
	int noRumah; 
	
}alamat;

typedef struct tanggalLahir
{
	int tanggal, tahun;
	char bulan[15], tempat[30];
}tanggalLahir;

typedef struct dataDosen
{
	int noDosen, NIDN;
	char nama[30];
	alamat alamat;
	tanggalLahir tanggalLahir;
	
}dataDosen;


int main()
{
	dataDosen dataDosen[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nData Dose Ke-%i\n", i+1);
		printf("Nomor Dosen 	: ");scanf("%d", &dataDosen[i].noDosen);



		printf("NIDN 		: ");scanf("%d", &dataDosen[i].NIDN);
		printf("Nama Dosen 	: ");scanf(" %[^\n]s", dataDosen[i].nama);
		
		printf("\nAlamat Dosen 	\n");
		printf("No Rumah 	: ");scanf("%d", &dataDosen[i].alamat.noRumah);
		printf("Nama Jalan 	: ");scanf(" %[^\n]s", dataDosen[i].alamat.namaJalan);
		printf("Kota 		: ");scanf(" %[^\n]s", dataDosen[i].alamat.kota);
		printf("Provinsi 	: ");scanf(" %[^\n]s", dataDosen[i].alamat.provinsi);
        printf("\nTanggal Lahir \n");
		printf("Tempat 		: ");scanf(" %[^\n]s", dataDosen[i].tanggalLahir.tempat);
		printf("Tanggal		:  ");scanf("%d", &dataDosen[i].tanggalLahir.tanggal);
		printf("Bulan 		:  ");scanf("%s", dataDosen[i].tanggalLahir.bulan);
		printf("Tahun 		:  ");scanf("%d", &dataDosen[i].tanggalLahir.tahun);
	}
	printf("\nData yang telah dimasukan\n");
	printf("----------------------------------------------------------------------------------------\n");
	printf("| Nomor Dosen |   NIDN   |    Nama    |                 Alamat                   |       Tempat     |          Tanggal Lahir        |\n");
	printf("-----------------------------------------------------------------------------------------n");
	printf("|             |          |            | No Rumah |  Jalan  |  Kota  |  Provinsi  |                  |  Tanggal  |  Bulan  |  Tahun  |\n");
	printf("----------------------------------------------------------------------------------------\n");
	
	for(i=0;i<5;i++)
	{
		printf("|     %d   	|    %d    |     %s    |    %d    |    %s    |    %s    |    %s    |        %s        |   %d    |    %s    |    %d    |\n"
		, dataDosen[i].noDosen , dataDosen[i].NIDN , dataDosen[i].nama , dataDosen[i].alamat.noRumah , dataDosen[i].alamat.namaJalan ,
		dataDosen[i].alamat.kota , dataDosen[i].alamat.provinsi , dataDosen[i].tanggalLahir.tempat , dataDosen[i].tanggalLahir.tanggal , dataDosen[i].tanggalLahir.bulan ,
		dataDosen[i].tanggalLahir.tahun);
	}
	
	printf("----------------------------------------------------------------------------------------\n");
	return 0;
}
