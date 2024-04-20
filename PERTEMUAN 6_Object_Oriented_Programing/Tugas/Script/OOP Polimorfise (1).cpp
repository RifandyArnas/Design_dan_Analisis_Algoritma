

#include <iostream>
#include <string>

using namespace std;


class Ryugakksei{
	
	protected:
	
		int u;
	
    	string s;
    	string n;
    	string j;
    	string f;

	public:
		
		Ryugakksei(){}
		
		Ryugakksei(int u, string s, string n, string j, string f)
		
			:u(u), s(s), n(n), j(j), f(f){}		

    void ahoyyyy(){

    	printf("\n-----------------------------------------------------\n");
    	
    		cout<<"Status\t: ";
    		
    		cin.ignore();
    		getline(cin, s);
    		
    		cout<<"Nama\t: ";
    		
    		cin.ignore();
    		getline(cin, n);
    		
    		cout<<"Umur\t: "; cin>>u;
    		
    		cout<<"Jurusan\t: ";
    		
    		cin.ignore();
    		getline(cin, j);
    		
    		cout<<"Fakultas: ";
    		
    		cin.ignore();
    		getline(cin, f);
    		
    	printf("\n-----------------------------------------------------");
    }
    
    void tampilan_output() {
    	
    	printf("\n\n-----------------------------------------------------\n");
    	
    	cout<<"Status\t\t: "<<s;
    	cout<<"\nNama\t\t: "<<n;
    	cout<<"\nUmur\t\t: "<<u;
    	cout<<"\nJurusan\t\t: "<<j;
    	cout<<"\nFakultas\t: "<<f;
    	
    }
    
    
};




int main() {
	
system("COLOR E");

	printf("\n\n====================TUGAS PERTEMUAN 6====================\n\n");
	
		string nm("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string t("18 April 2024 ");
		string v("20 April 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		t.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<nm;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<t<<"||"<<v;
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>Polimorphism<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kage_no_jitsuryokusha; int hoshi_wo_ou_kodomo;
		
		hoshi_wo_ou_kodomo=1;
		
		kage_no_jitsuryokusha=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]JIBUN";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto jibun;
					
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
					
					
						while(hoshi_wo_ou_kodomo < kage_no_jitsuryokusha){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUNOWA";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
							
							hoshi_wo_ou_kodomo--;
							
						}
					
				}
	


jibun:

system("cls");
system("COLOR 3");

	printf("\n\n////////////////////welcome to KETSURAUTORU////////////////////");
	
	printf("\n");

system("COLOR 9");

		Ryugakksei ryugakksei[5]; //ryugakksei adalah sebuah object
	
		string s;
		string n;
		string j;
		string f;
		
		int u;
	
	printf("---------------------------------------------------------------\n");
    	
    		cout<<"Silahkan ketikkan status, nama, umur, jurusan, dan\n";
    		cout<<"fakultas dari 5 mahasiswa!";
    		
    		cout<<endl;
    	
    printf("---------------------------------------------------------------\n");
	
			for(int i=0; i<5; i++){
			
				cout<<"\n--------------------------------------------------";
				cout<<"\nRyugakksei ke - "<<i+1;
				cout<<"\n--------------------------------------------------";
			
				ryugakksei[i].ahoyyyy();
			
			}
		
	printf("\n\n");
	
	printf("///////////////////////////RYUGAKKSEi///////////////////////////");
	
	printf("\n\n");
	
			for(int i=0; i<5; i++){
				
				ryugakksei[i].tampilan_output();
				
				cout<<endl<<endl;
				
			}


cin.get();

return 0;

}
