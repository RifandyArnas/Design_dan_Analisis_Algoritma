
#include <iostream>
#include <string>

using namespace std;

void ahoy(){
	
	system("COLOR D");
	
		printf("\n\n====================TUGAS PERTEMUAN 7====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string t("27 April 2024 ");
		string v("27 April 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		t.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<t<<"||"<<v;
	
		printf("\n\n>>>>>>>>>>>>>>>>>>>Searching (Binary)<<<<<<<<<<<<<<<<<<<\n\n");
	
}

int searchingProcess(string ahoy[], string low, int high){ 

	int peko= 0;
	 
	int kula = high-1; 

		while (peko <= kula) { 

			int hasil = peko+(kula - peko)/2; 

			int mineracftResistance = 255; 

				if (low == (ahoy[hasil])) 
		
					mineracftResistance = 0; 

				if (mineracftResistance == 0) 
		
					return hasil; 

				if (low > (ahoy[hasil])) 
		
					peko = hasil + 1; 
		
				if(low < (ahoy[hasil]))
		
					kula = hasil-1;
		
		} 

	return -1; 
	
} 

int main(){
	
	ahoy();
	
	int pilihan; int komorebi_to_gyutto; int hoshi_wo_ou_kodomo;
		
		hoshi_wo_ou_kodomo=1;
		
		komorebi_to_gyutto=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]KOMOREBI";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto komorebi;
					
				}
				
				else if(pilihan==2){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
				else{
					
					system("cls");
					
					system("COLOR C");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
						while(hoshi_wo_ou_kodomo < komorebi_to_gyutto){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUN";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
							
							hoshi_wo_ou_kodomo--;
							
						}
					
				}


komorebi:
	
	system("cls"); 
	system("COLOR E");
	
			string ketik;
		
			string namaBuku[]={"Gotoubun no Hanayome", "Kimi no Suizou wo Tabetai", "Kotonoha no Niwa", "Your Lie in April", "Your Tommorow I am Yesterday",};	
		
		printf("\n\n--------------------------------------------------\n");	
			
				cout<<"Pencarian Buku";
		
		printf("\n--------------------------------------------------\n");
		
				cout<<"Ketik nama buku\t: ";
				
				cin.ignore();
				getline(cin, ketik);
		
		printf("\n--------------------------------------------------\n\n");

			int totalBuku=5;
			
			int tampilan = searchingProcess(namaBuku, ketik, totalBuku);
			
					if(tampilan == -1){
					
					
						system("COLOR 2");
						
						cout<<"Buku ini tidak ada di perpustakaan ini loh!";
					}
					
					else{
					
					
						system("COLOR 2");
					
						cout<<"Buku "<<ketik<<" berada di rak ke-"<<tampilan;
						
					}
						
						
						
cin.get();

return 0;

}































































































