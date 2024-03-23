

#include <iostream>
#include <string>

using namespace std;

class Ryugakksei{
	
	private:
	
    	string namae;
    
    	string kyushitsu;
    
    	bool statusu;

	public:
	
    
    Ryugakksei() : namae(""), kyushitsu(""), statusu(false) {}

    
    void setNamae(string nm) {
    	
        namae = nm;
        
    }

    void setKyushitsu(string kst) {
    	
        kyushitsu = kst;
        
    }

    void setStatusu(bool ahoy) {
    	
        statusu = ahoy;
        
    }

    
    string getNamae() const {
    	
        return namae;
        
    }

    string getKyushitsu() const {
    	
        return kyushitsu;
        
    }

    bool getStatusu() const {
    	
        return statusu;
        
    }

    void HonAgeru(string hon) {
    	
        if (!statusu) {
            
            cout<<endl<<endl;
            
            cout<<"----------------------------------------------------------------";
            
            cout<<"\nNamae\t: "<<namae;
            cout<<"\nKyushitsu\t:"<<kyushitsu;
            cout<<"\nHon wa\t: "<<hon;
            cout<<"\nStatusu\t: [Hon wa Ageru!]";
            
            cout<<endl;
            
            cout<<"----------------------------------------------------------------";
            
			statusu = true;
			
        } 
		
		else {
        	
        	cout<<"\n\nSystem: [Gomenasai, "<<namae<<" te hon wa agemasu!]";
        	
        	
		}
		
    }

    void HonOwanai(string hon) {
    	
        if (statusu) {
            
            cout<<endl<<endl;
            
            cout<<"----------------------------------------------------------------";
            
            cout<<"\nNamae\t\t: "<<namae;
            cout<<"\nKyushitsu\t:"<<kyushitsu;
            cout<<"\nHon wa\t\t: "<<hon;
            cout<<"\nStatusu\t\t: [Hon wa Owanaiyooo!]";
            
            cout<<endl;
            
            cout<<"----------------------------------------------------------------";
            
			statusu = false;
        } 
		
		else {
        	
        	cout<<endl<<endl;
        	
            cout<<"----------------------------------------------------------------";
       		cout<<"\nSystem: [Anoo, "<<namae<<"te FREE da yooo!]";
       		
       		cout<<endl;
       		
       		cout<<"----------------------------------------------------------------";
       		
       		
	    }
	    
    }
    
};


int main() {

	
system("COLOR F");

	printf("\n\n====================TUGAS PERTEMUAN 3====================\n\n");
			
			cout<<"Nama\t: RIFANDY ARNAS";
			cout<<"\nNIM\t: 232310001";
			cout<<"\nKelas\t: TI-23-PA";
			cout<<"\n\nMatkul\t: Desigh dan Analisis Algoritma";
			cout<<"\nTanggal\t: 22 Maret 2024 (Pembuatan Script)";
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>Setter Getter Class (2)<<<<<<<<<<<<<<<<<<<\n\n");

	
		int pilihan; int kimi_no_na_wa; int tenki_no_ko; int okane;
		
		okane=5000;
		
		kimi_no_na_wa=1;
		
		tenki_no_ko=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]TOSHOKAN (perpustakaan)";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto toshokan;
					
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
							
							cout<<"MADAKONOSEKAIWAMINASAGARASUZUMU";
							
							kimi_no_na_wa--;
							
						}
					
				}
	
toshokan:
		
		
		Ryugakksei ryugakksei;

    	string namae;
		string kyushitsu;
		string hon;
    
    		cout<<endl<<endl;
        	
    		cout<<"----------------------------------------------------------------";
    		cout<<"\nAnata no namae wa\t: ";
    		getline(cin, namae); 
    
    		cout<<"Anata no kyushitsu\t: ";
    		getline(cin, kyushitsu);
    
    	ryugakksei.setNamae(namae);
    
    	ryugakksei.setKyushitsu(kyushitsu); 	
		    
			cout<<endl;
		
    		cout<<"----------------------------------------------------------------";
    		
    		cout<<endl<<endl;
        	
    		cout<<"----------------------------------------------------------------";
			cout<<"\n\nKetik judul hon (buku) yang ageru (dipinjam): ";
    		getline(cin, hon);
    
    	ryugakksei.HonAgeru(hon);
			
			cout<<endl;
			
			cout<<"----------------------------------------------------------------";
		
			cout<<endl<<endl;
			
			cout<<"----------------------------------------------------------------";
    		cout<<"\nKetik judul hon (buku) yang owanai (dikembalikan): ";
    		getline(cin, hon);
	
		ryugakksei.HonOwanai(hon); 	
		    
			cout<<endl;
		
    		cout<<"----------------------------------------------------------------";
			


cin.get();

return 0;

}








