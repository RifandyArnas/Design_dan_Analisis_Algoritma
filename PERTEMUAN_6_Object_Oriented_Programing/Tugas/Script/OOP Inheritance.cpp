

#include <iostream>
#include <string>

using namespace std;
	

class jikayosha {
	
	protected:
		
		int nen_produksi;
		
    	string namae_kuruma;
    
	public:
	
    	jikayosha(string brand_kuruma, int nen)
	 
        	: namae_kuruma(brand_kuruma), nen_produksi(nen) {
        	
    		}
    
    
    	void tampilan_hasil(){
    		
    		system("COLOR C");
    		
    		printf("--------------------------------------------------------");
    		printf("----------------------------------------\n");
    		
    		
    			cout<<"||\tNamae Kuruma\t||\tNen Produksi\t||\tKuruma Supidoo\t||";
    		
    			cout<<endl;
    		
    			cout<<"||\t"<<namae_kuruma<<"\t||\t"<<nen_produksi;
    	
		}


};


class seer : public jikayosha {
	
	protected:
		
		int kuruma_no_sokudo;
		
	public:
		
    	seer(string namae_kuruma, int nen_produksi, int supido):
    	
        	jikayosha(namae_kuruma, nen_produksi), kuruma_no_sokudo(supido) {
        		
   			}

    void tampilan_hasil(){
    	
    	system("COLOR 6");
    	
    		jikayosha::tampilan_hasil();
    	
        		cout<<"\t\t||\t"<<kuruma_no_sokudo<<" Kmh"<<"\t\t||";
        
        printf("\n--------------------------------------------------------");
    	printf("----------------------------------------\n");
    		
        
    }
	
};


int main(){
	
system("COLOR E");

	printf("\n\n====================TUGAS PERTEMUAN 6====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string t("18 April 2024 ");
		string v("20 April 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		t.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<t<<"||"<<v;
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>Inheritance (Turunan)<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kage_no_jitsuryokusha; int hoshi_wo_ou_kodomo;
		
		hoshi_wo_ou_kodomo=1;
		
		kage_no_jitsuryokusha=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]KETSURAUTORU";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto ketsurautoru;
					
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
			
				
ketsurautoru:

system("cls");
system("COLOR 9");

	printf("\n\n////////////////////welcome to KETSURAUTORU////////////////////");
	
	printf("\n");

system("COLOR D");
	printf("\n\n----------------------------------------------------------\n");
	
		int kns; int np;
	
		string nk;
			
			cout<<"Silahkan ketikan nama, tahun produksi, dan kecepatan mobil!";
	
	printf("\n----------------------------------------------------------");;
			
			cout<<endl<<endl;
			
			cout<<"------------------------------------\n";
			cout<<"Nama Mobil\t: ";
			
			cin.ignore();
			getline(cin, nk);
			
			cout<<"------------------------------------\n";
	
			cout<<"Tahun Produksi\t: "; cin>>np;
			
			cout<<"------------------------------------\n";
			
			cout<<"Kecepatan Maks\t: "; cin>>kns;
	
			cout<<"------------------------------------";
	
			cout<<endl<<endl;
			
		seer kuruma(nk, np, kns);
			
			cout<<"-----------\n";
			cout<<"JIKAYOSHA";
			cout<<"\n-----------";
			
			cout<<endl<<endl;
			
			kuruma.tampilan_hasil();	


cin.get();

return 0;
	
}
































































































