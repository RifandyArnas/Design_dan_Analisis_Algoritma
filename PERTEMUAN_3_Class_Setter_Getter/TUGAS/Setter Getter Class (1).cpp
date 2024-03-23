

#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
	
	private:
	
    	string nama;
    	string npm;

	public:
	
    	Mahasiswa() : nama(""), npm("") {}

    	Mahasiswa(string _nama, string _npm) : nama(_nama), npm(_npm) {}

    	void setNama(string _nama) {
    	
        	nama = _nama;
        
    	}

    	void setNPM(string _npm) {
    	
        	npm = _npm;
        
    	}

    	string getNama() const {
    	
        	return nama;
        
    	}

    	string getNPM() const {
    	
        	return npm;
        
    	}
};


int main() {
	
system("COLOR F");

	printf("\n\n====================TUGAS PERTEMUAN 3====================\n\n");	
	
			cout<<"Nama\t: RIFANDY ARNAS";
			cout<<"\nNIM\t: 232310001";
			cout<<"\nKelas\t: TI-23-PA (LAB 2)";
			cout<<"\n\nMatkul\t: Design dan Analisis Algoritma";
			cout<<"\nTanggal\t: 22 Maret (Pembuatan Script)";
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>Setter Getter Class (1)<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kimi_no_na_wa; int tenki_no_ko;
		
		kimi_no_na_wa=1;
		
		tenki_no_ko=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]NANDEMONAIYA";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto nandemonaiya;
					
				}
				
				else if(pilihan==2){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
				else{
					
					system("cls");
					
					system("COLOR D");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
						while(kimi_no_na_wa < tenki_no_ko){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUNOWA";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
							kimi_no_na_wa--;
							
						}
					
				}
	
nandemonaiya:
	
	
    int jumlahMahasiswa;
    
    		cout << "\n\nMasukkan jumlah mahasiswa: ";
    
    		cin >> jumlahMahasiswa;

    Mahasiswa *daftarMahasiswa = new Mahasiswa[jumlahMahasiswa];
    
			cout<<endl;

    			for (int i = 0; i < jumlahMahasiswa; ++i) {
    	
        			string nama, npm;
        
        			cout << "Masukkan nama mahasiswa (tanpa spasi)" << i+1 << "\t: ";
        
        			cin >> nama;
        
        			cout << "Masukkan NPM mahasiswa " << i+1 << "\t\t: ";
        
        			cin >> npm;

        			daftarMahasiswa[i] = Mahasiswa(nama, npm);
        
			    }

    			for (int i=0; i<jumlahMahasiswa; ++i) {
    	
    				cout << "\nMahasiswa " <<i+1;
    	
        			cout << "\nNama\t: " << daftarMahasiswa[i].getNama() ;
        
					cout<<endl<< "NPM\t: " << daftarMahasiswa[i].getNPM() << endl;
		
    			}

    
return 0;


}












