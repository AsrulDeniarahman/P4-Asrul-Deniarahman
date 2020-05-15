#include <iostream>
#include <iomanip>
using namespace std;

void mahasiswa()
{
	int i;
	string bio1[150]={" ","Nama : ASRUL DENIARAHMAN","NIM : F1B019028","Tanggal Lahir : 25-01-2001","Tempat Lahir : PEJERUK","Provinsi Lahir : Nusa Tenggara Barat","Jenis Kelamin : Laki-Laki","Golongan Darah : A","Agama : Islam","Alamat : Pejeruk Kebon Bawak Barat","RT : 06","RW : 22","Kelurahan : Pejeruk","Kecamatan : Ampenan","Kota : Mataram","No HP : 087714756223","email : asruldeniarahman12@gmail.com"};
	string bioayah[150] = {" ","Nama Ayah : Syafiuddin", "Tanggal Lahir Ayah : 31-12-1972","Pendidikan Ayah : SLTA Sederajat","Pekerjaan Ayah : Buruh Harian Lepas","Penghasilan ayah : <Rp.1.000.000,-"};
	string bioibu[150] = {" ","Nama Ibu : Sumiarni", "Tanggal Lahir Ibu : 18-09-1974","Pendidikan Ibu : SLTA Sederajat","Pekerjaan Ibu : Ibu Rumah Tangga","Penghasilan ayah : <Rp.500.000,-"};
	
	cout<<"ASRUL DENIARAHMAN\n";
	cout<<"Biodata\n";
	cout<<"=================\n";
	cout<<"Pribadi : \n";
	cout<<"==========\n";
	for (i=1;i<=17;i++)
	{cout<<bio1[i]<<"\n";}
	cout<<"Orang Tua\n";
	cout<<"=========\n";
	cout<<"Ayah : \n";
	for (i=1;i<=5;i++)
	{
		cout<<bioayah[i]<<"\n";
	}
	cout<<"Ibu : \n";
	for (i=1;i<=5;i++)
	{
		cout<<bioibu[i]<<"\n";
	}
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"-------------------------------------------------------------------------\n";
}
void nilai()
{
	string matkul[1000] = {"Pembangunan Karakter C", "Fisika 2 C","Kalkulus 2 C", "Rangkaian Listrik I C", "Rangkaian Logika C", "Praktikum Rlog", "Praktikum Alprog", "Alprog C", "Dasar telkomunikasi C","Bahasa Indonesia C","Ekonomi Teknik C"};
 	int sks[11]={2,3,2,3,2,1,1,2,3,2,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1216","ES1215","ES1217","ES2227","ES2233"};
	int uts[11]={90,80,75,80,90,80,80,83,75,89,87};	
	int uas[11]={90,80,79,74,96,80,80,85,89,85,85};
	int nilaiakhir[11]={90,84,77,77,93,80,80,84,82,87,86};
	string huruf[11]={"A","B","B","B","A","B","B","B","B","A","A"};
	cout<<"||Nilai F1B019028\n";
 	cout<<"=================\n";
 	cout<<"----------------------------------------------------------------------------------\n";
	cout<<"==================================================================\n";
 	cout<<"|     Mata Kuliah      |Kode MK    | SKS | UTS | UAS | NA  |Huruf|\n";
 	cout<<"==================================================================\n";
 	for(int i=0;i<10;i++){
	for (i=0;i<=10;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(22)<<matkul[i]<<"|"<<setw(11)<<kode[i]<<"|"<<setw(5)<<sks[i]<<"|"<<setw(5)<<uts[i]<<"|"<<setw(5)<<uas[i]<<"|"<<setw(5)<<nilaiakhir[i]<<"|"<<setw(5)<<huruf[i]<<"|\n";}}
  	cout<<"\n================================================================\n";
}
void krs()
{
  	int smstr;
	int sks[1000],n;
 	char matkul[1000][30];
 	char choose;
 	ulang :
 	cout<<"Pengajuan KRS : \n";
 	cout<<"================\n";
 	cout<<"Ajukan KRS Anda Sebelum Tanggal Yang Sudah Ditentukan!\n";
	cout<<"Masukan banyak mata kuliah yang akan di ambil : ";
 	cin>>n;
 	cout<<endl;
 	cout<<"KRS untuk semester (1-8): ";cin>>smstr;
 	for (int i=0;i<n;i++){
  		cout<<"Masukan nama matakuliah ke-"<<i+1<<" : ";
  		scanf(" %[^\n]s",matkul[i]);
  		cout<<"Masukan SKS mata kuliah\t : ";
  		cin>>sks[i];}
 	cout<<"Kartu Rencana Studi Mahasiswa :\n";
 	cout<<"semester "<<smstr<<"\n";
 	cout<<"\t\t\t\tApakah Anda Yakin Itu Saja??[y/t]";cin>>choose;
			if (choose=='y' || choose=='Y'){
			cout<<"======================================\n";
 			cout<<"|      Mata Kuliah     \t| SKS | Nilai|\n";
 			cout<<"======================================\n";
 			for(int i=0;i<n;i++){
  			cout<<"| "<<setiosflags(ios::left)<<setw(22)<<matkul[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(4)<<sks[i]<<"|";
  			cout<<" "<<setiosflags(ios::left)<<setw(5)<<" - "<<"|\n";
			cout<<"======================================\n";}
			cout<<"\n\t\t\t\tMenunggu persetujuan dosen Pembimbing"<<endl;	
			}
			else{
				cout<<"\t\t\t\t Anda ingin ulang ?[y/t]  : ";cin>>choose;cout<<"\t\t\n";
					if (choose=='y' || choose=='Y')
					{system("cls");
					goto ulang;}
					if (choose=='t' || choose=='T')
					{system("cls"); goto selesai;}
			}
			selesai : 
				cout<<"\t\t\t\tTerimakasi\n";
				cout<<"\t\t\t\t==========\n"<<endl;	
}
void matkul()
{	
	cout<<"---------------------------------------------------\n";
	cout<<"|     Mata Kuliah        |    ASRUL DENIARAHMAN   |\n";
	cout<<"---------------------------------------------------\n"; 
	string mk[1000] = {"Pembangunan Karakter", "Fisika 2","Kalkulus 2", "Rangkaian Listrik I", "Rangkaian Logika", "Praktikum Rlog", "Praktikum Alprog", "Alprog", "Dasar telkomunikasi","Bahasa Indonesia","Ekonomi Teknik"};
 	int sks[11]={2,3,2,3,2,1,1,2,3,2,2};
	string kode[100]={"ES1209","ES1210","ES1211","ES1212","ES1213","ES1214","ES1216","ES1215","ES1217","ES2227","ES2233"};
	int smstr[11]={2,2,2,2,2,2,2,2,2,4,4};
	string kelas[11]={"C","C","C","C","C","C","C","C","C","C","C"};
	string sifat[11]={"WS","WS","WS","WS","WS","WS","WS","WS","WS","WS","WS"};

 	cout<<"===========================================================================================\n";
 	cout<<"|    Kode MK     |      Mata Kuliah                  | Kelas    | SKS|   Sifat  | Semester|\n";
 	cout<<"===========================================================================================\n";
 	for(int i=0;i<10;i++){
	for (i=0;i<=10;i++){
  	cout<<"|"<<setiosflags(ios::left)<<setw(16)<<kode[i]<<"| "<<setw(34)<<mk[i]<<"|       "<<setw(3)<<kelas[i]<<"| "<<setw(3)<<sks[i]<<"|       "<<setw(3)<<sifat[i]<<"| "<<setw(8)<<smstr[i]<<"|\n";}}
  	cout<<"\n===========================================================================================\n";
}

main()
{
	cout<<"                                            SELAMAT DATANG\n";
	cout<<"                                                  DI\n";
	cout<<"                             SISTEM INFORMASI AKADEMIK UNIVERSITAS MATARAM\n";
	cout<<"                             =============================================\n";
	cout<<"                                            Silahkan Login!\n";
	
	int pilih;
	char choose, choosed;
	string user, pass;
	char pilihan;
	ulang : 
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "F1B019028" && pass == "asrul")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\t\t\n";
					if (pilihan=='y' || pilihan=='Y')
					{system("cls");
					goto ulang;}
					if (pilihan=='t' || pilihan=='T')
					{goto selesai;}		
			}
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	menu : 
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|\t\t\t\t\t\t\t\t\t|\n";
	cout<<"|\t\t\t ASRUL DENIARAHMAN\t\t\t\t|\n";
	cout<<"|\t\t\t\t\t\t\t\t\t|\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"\t\t\tMENU UTAMA\n";
	cout<<"1. Biodata Mahasiswa\n";
	cout<<"2. Nilai\n";
	cout<<"3. KRS\n";
	cout<<"4. Mata Kuliah\n";
	cout<<"Pilih Menu : ";cin>>pilih;
	switch(pilih)
	{
		case (1) : 
		{
			system("cls");
			mahasiswa();
				cout<<"Apakah Anda Yakin Ingin Kembali Ke Menu Utama??[y/t]";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
		}
		break;
		case (2) :
		{
			system("cls");
			nilai();
			cout<<"Apakah Anda Yakin Ingin Kembali Ke Menu Utama??[y/t]";cin>>choose;
			if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
		}
		break;
		case (3) : 
		{
			system("cls");
			krs();
				cout<<"Apakah Anda Yakin Ingin Kembali Ke Menu Utama??[y/t]";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
		}
		break;
		case (4) :
		{
			system("cls");
			matkul();
				cout<<"Apakah Anda Yakin Ingin Kembali Ke Menu Utama??[y/t]";cin>>choose;
				if (choose=='y' || choose=='Y')
				{system("cls"); goto menu;}
		}

		default : 
		{
			cout<<"Tidak ada pilihan yang di pilih\n";
				cout<<"Pilih kembali : ";cin>>choosed;
				if (choosed=='y' || choosed=='Y')
				{system("cls"); goto menu;}
				if (choosed=='t' || choosed=='T')
				{system("cls"); goto selesai;}
		}
	}
	selesai : 
		cout<<"Program Selesai, Terimakasi\n";
		cout<<"==========================="<<endl;
}
