

#include <iostream>
#include <string>

using namespace std;

int main(){
	
system("COLOR F");

	int ahoy=1;
	
	for(int i=1; i<2; i++){
		
		printf("\n\n\t==========TUGAS PERTEMUAN 1==========\n\n");
		
			string nama("RIFANDY ARNAS");
			string nim("232310001");
			string kelas("TI-23-PA");
			
			kelas.append(" (LAB 2)");
			
				cout<<"\tNama\t: "<<nama;
				cout<<"\n\tNIM/NPM\t: "<<nim;
				cout<<"\n\tKelas\t: "<<kelas;
		
		ahoy++;
	}
	
	if(ahoy==2){
		
		printf("\n\n\t<<<<<<<<<<Bubble Sort<<<<<<<<<<\n\n");
		
			string matkul("Design dan Analisis Algoritma");
			string tanggal("15 Maret 2024");
			
			tanggal.append(" (Pembuatan Script)");
			
				cout<<"\tMatkul\t: "<<matkul;
				cout<<"\n\tTanggal\t: "<<tanggal;
		
	}
	
	printf("\n\n\tList Program kali ini!");
	printf("\n\t[1] GETSUKU Program");
	printf("\n\t[2] TOSHOKAN Program");
		
		int pilihan;
		
			cout<<"\n\n\tPilihan kamu (ketik 1/2) [1/2]: "; cin>>pilihan;
			
				if(pilihan==1){
					
					goto getsuku;
					
				}
				
				else if(pilihan==2){
					
					goto toshokan;
					
				}
				
				else{
					
					system("cls");
					
					cout<<"\n\n\n\tPilihan yang kamu pilih ga ada!";
					cout<<"\n\n\tBye!! [Sistem Exit]";
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}

getsuku:
	
	system("cls");
	
	system("COLOR 9");
	
	printf("\n\n\t////////////////////GETSUKU////////////////////\n\n");
	
	printf("\tSelamat datang di program GETSUKU!");
	printf("\n\n\tProgram ini akan mensortir angka yang kamu mau!");
	printf("\n\tSelamat Mencoba!\n\n");
	
		int sort[10000];
		int sort_size;
		
			cout<<"\t------------------------------------------";
			cout<<"\n\tKetik jumlah angka yang mau di sortir: ";
			
			cin>>sort_size;
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tKetik [angka bebas] dan tidak melebihi 10000!";
			
			cout<<endl<<endl;
			
				for(int i=0; i<sort_size; i++){
					
					cout<<"\tAngka ke-"<<i+1<<": ";
					
					cin>>sort[i];
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tData Awal: ";
			
				for(int i=0; i<sort_size; i++){
					
					cout<<sort[i]<<" ";
					
				}
			
			
			cout<<"\n\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tSorting Process [Ascending]";
			cout<<"\n\t------------------------------------------";
			
		int backup;
		
				for(int i=0; i<sort_size; i++){
					
					int marine=1;
					
					for (int j=0; j<sort_size-1; j++){
						
						if(sort[j]>sort[j+1]){
							
							backup=sort[j];
							
							sort[j]=sort[j+1];
							
							sort[j+1]=backup;
							
							marine++;
							
						}
						
					}
					
					if(marine==1){
						
						break;
						
					}
					
					cout<<"\n\t"<<i+1<<"th Sorting Process: ";
					
						for(int k=0; k<sort_size; k++){
							
							cout<<sort[k]<<" ";
							
						}
					
					cout<<endl;
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tHasil Sorting: ";
			
				for(int i=0; i<sort_size; i++){
					
					cout<<sort[i]<<" ";
					
				}
			cout<<"\n\t------------------------------------------";	
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tData Awal [Hasil sorting Ascending]: ";
			
				for(int i=0; i<sort_size; i++){
					
					cout<<sort[i]<<" ";
					
				}
			
			
			cout<<"\n\t------------------------------------------";
			
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tSorting Process [Descending]";
			cout<<"\n\t------------------------------------------";
			
		int backup1;
		
				for(int i=0; i<sort_size; i++){
					
					int hoshou_marine=1;
					
					for(int j=0; j<sort_size-1; j++){
						
						if(sort[j]<sort[j+1]){
							
							backup1=sort[j];
							
							sort[j]=sort[j+1];
							
							sort[j+1]=backup1;
							
							hoshou_marine++;
							
						}
						
					}
					
					if(hoshou_marine==1){
						
						break;
						
					}
					
					cout<<"\n\t"<<i+1<<"th Sorting Process: ";
					
						for(int k=0; k<sort_size; k++){
							
							cout<<sort[k]<<" ";
							
						}
					
					cout<<endl;
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tHasil Sorting: ";
			
				for(int i=0; i<sort_size; i++){
					
					cout<<sort[i]<<" ";
					
				}
			cout<<"\n\t------------------------------------------";
			
		int yoshi_ichi;
		
			cout<<"\n\n\tApakah mau lanjut ke program lain?";
			cout<<"\n\tAtau mau mengulang program ini?";
			cout<<"\n\t[1]Lanjut";
			cout<<"\n\t[2]Mengulang";
			cout<<"\n\t[3]Exit";
			
			cout<<"\n\n\tPilihan kamu [1/2/3]: "; cin>>yoshi_ichi;
			
				if(yoshi_ichi==1){
					
					goto toshokan;
					
				}
				
				else if(yoshi_ichi==2){
					
					goto getsuku;
					
				}
				
				else{
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
toshokan:
	
	system("cls");
	
	system("COLOR E");
	
	printf("\n\n\t////////////////////TOSHOKAN////////////////////\n\n");
	
	printf("\tSelamat datang di program TOSHOKAN!");
	printf("\n\n\tProgram ini akan mensortir nama buku yang kamu mau!");
	printf("\n\tSelamat Mencoba!\n\n");
	
		string bukusrt[100];
		
		int bukusrt_size;
		
			cout<<"\t------------------------------------------";
			cout<<"\n\tKetik jumlah buku yang mau di sortir: ";
			
			cin>>bukusrt_size;
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tKetik [nama buku] dan tidak lebih 100 karakter!";
			
			cout<<endl<<endl;
			
				for(int i=0; i<bukusrt_size; i++){
					
					cout<<"\tBuku ke-"<<i+1<<": ";
					
					cin>>bukusrt[i];
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tData Awal: ";
			
				for(int i=0; i<bukusrt_size; i++){
					
					cout<<"|"<<bukusrt[i]<<"| ";
					
				}
			
			
			cout<<"\n\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tSorting Process [Ascending]";
			cout<<"\n\t------------------------------------------";
			
		string buku;
		
				for(int i=0; i<bukusrt_size; i++){
					
					int chloe=1;
					
					for (int j=0; j<bukusrt_size-1; j++){
						
						if(bukusrt[j]>bukusrt[j+1]){
							
							buku=bukusrt[j];
							
							bukusrt[j]=bukusrt[j+1];
							
							bukusrt[j+1]=buku;
							
							chloe++;
							
						}
						
					}
					
					if(chloe==1){
						
						break;
						
					}
					
					cout<<"\n\t"<<i+1<<"th Sorting Process: ";
					
						for(int k=0; k<bukusrt_size; k++){
							
							cout<<"|"<<bukusrt[k]<<"| ";
							
						}
					
					cout<<endl;
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tHasil Sorting: ";
			
				for(int i=0; i<bukusrt_size; i++){
					
					cout<<"|"<<bukusrt[i]<<"| ";
					
				}
			cout<<"\n\t------------------------------------------";	
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tData Awal [Hasil sorting Ascending]: ";
			
				for(int i=0; i<bukusrt_size; i++){
					
					cout<<"|"<<bukusrt[i]<<"| ";
					
				}
			
			
			cout<<"\n\t------------------------------------------";
			
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tSorting Process [Descending]";
			cout<<"\n\t------------------------------------------";
			
		string buku1;
		
				for(int i=0; i<bukusrt_size; i++){
					
					int sakamata_chloe=1;
					
					for (int j=0; j<bukusrt_size-1; j++){
						
						if(bukusrt[j]<bukusrt[j+1]){
							
							buku1=bukusrt[j];
							
							bukusrt[j]=bukusrt[j+1];
							
							bukusrt[j+1]=buku1;
							
							sakamata_chloe++;
							
						}
						
					}
					
					if(sakamata_chloe==1){
						
						break;
						
					}
					
					cout<<"\n\t"<<i+1<<"th Sorting Process: ";
					
						for(int k=0; k<bukusrt_size; k++){
							
							cout<<"|"<<bukusrt[k]<<"| ";
							
						}
					
					cout<<endl;
					
				}
			
			cout<<"\t------------------------------------------";
			
			cout<<"\n\n\t------------------------------------------";
			cout<<"\n\tHasil Sorting: ";
			
				for(int i=0; i<bukusrt_size; i++){
					
					cout<<"|"<<bukusrt[i]<<"| ";
					
				}
			cout<<"\n\t------------------------------------------";
			
		int yoshi_ni;
		
			cout<<"\n\n\tApakah mau exit atau mengulang program ini?";
			cout<<"\n\tAtau mau mengulang program sebelumnya?";
			cout<<"\n\t[1]Mengulang GETSUKU";
			cout<<"\n\t[2]Mengulang TOSHOKAN";
			cout<<"\n\t[3]Exit";
			
			cout<<"\n\n\tPilihan kamu [1/2/3]: "; cin>>yoshi_ni;
			
				if(yoshi_ni==1){
					
					goto getsuku;
					
				}
				
				else if(yoshi_ni==2){
					
					goto toshokan;
					
				}
				
				else{
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
	


cin.get();
				
return 0;

}
	
	
