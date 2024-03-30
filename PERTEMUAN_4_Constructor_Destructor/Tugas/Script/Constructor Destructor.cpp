x

#include <iostream>
#include <string>

using namespace std;

class Tewanbango{
	
	private:
	
    	string namae;
    	
		string bango;

	public:
    	
    	Tewanbango(){}
    
    	Tewanbango(string namae, string bango){
    		
    		this->namae=namae;
    		
    		this->bango=bango;
    		
		}
		
		string getName(){
			
			return namae;
			
		}
		
		string getPhoneNumber(){
			
			return bango;
			
		}
		
};


int main() {
	
system("COLOR E");

	printf("\n\n====================TUGAS PERTEMUAN 4====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string t("30 Maret 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		t.append("(Pembuatan Script)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<t;
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>Constructor Destructor<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kimi_no_na_wa; int suzume_no_tojimari;
		
		kimi_no_na_wa=1;
		
		suzume_no_tojimari=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]DREAM LANTERN";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto dream_lantern;
					
				}
				
				else if(pilihan==2){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
				else{
					
					system("cls");
					
					system("COLOR A");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
						while(kimi_no_na_wa < suzume_no_tojimari){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUNOWA";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";

							kimi_no_na_wa--;
							
						}
					
				}
	
	
dream_lantern:
	
	system("cls");
	
	system("COLOR C");	
	
    	const int bangomaksu=10;
    
//    Contact contacts[maxContacts];
    
    	Tewanbango tewanbangos[bangomaksu];
    
//    	int bangowa=0;
    	
    		cout<<endl<<endl;
    	
    		cout<<"===============================================================";

    		cout<<"\nTewanbango [Maksu = 10]!\n";
    		
    		cout<<"===============================================================";
    		
    		cout<<endl<<endl;
    		
    	string pilihan1;
    	
    	int bangowa=0;
    		
    			for(int i=0; i<bangomaksu; i++){
    				
    				string namae;
    				
    				string bango;
    				
    				system("COLOR 9");
    				
    				cout<<"("<<i+1<<") "<<" Tenwanbango no namae wa\t: ";
    				cin.ignore();
        			getline(cin, namae);
        			
        			system("COLOR 8");
        			
        			cout<<"     Bango wa\t\t\t: ";
        			getline(cin, bango);
        			
        			tewanbangos[bangowa] = Tewanbango(namae, bango);
        			
        			bangowa++;
        			
        			cout<<endl<<endl;
        			
        			system("COLOR C");
        			
        			cout<<"     Yatta~ [Tewanbango wa Success desu yoo!]";
        			
        			cout<<endl<<endl;
        			
        			cout<<"     Mo ikai? (Mau menambah kontak lagi?)";
        			
        			cout<<"\n\n     Pilihan kamu [Yes/No]: ";
        			
        			cin>>pilihan1;
        			
        			cout<<endl;
        			
        				if(pilihan1=="No"||pilihan1=="no"||pilihan1=="NO"){
        					
        					break;
        					
						}
    				
				}
    			
    		
    		cout<<endl;
    		
    		cout<<"===============================================================";
    		
    		cout<<"\nTewanbango\n";
    		
    		cout<<"===============================================================";
    		
    		cout<<endl<<endl;
    		
    			for(int i=0; i<bangowa; i++){
    				
    				system("COLOR 9");
    				
    				cout<<"("<<i+1<<")"<<"Namae\t: "<<tewanbangos[i].getName();
    				
    				cout<<endl;
    				
    				system("COLOR 8");
    				
    				cout<<"   Bango\t: "<<tewanbangos[i].getPhoneNumber();
    				
    				cout<<endl<<endl;
    				
				}
    		
    		system("COLOR 2");
    		
    		cout<<"===============================================================";
    		
    		cout<<endl<<endl;
    	
    	system("COLOR C");
    	
		int chh;
			
    		cout<<"Mau mengulangi program kali ini?";
    		cout<<"\n[1]Mau";
    		cout<<"\n[2]Exit Program";
    		
    		cout<<"\n\nPilihan kamu [1/2/?]: ";
    		
    		cin>>chh;
    			
    			if(chh==1){
					
					goto dream_lantern;
					
				}
				
				else if(chh==2){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
				else{
					
					system("cls");
					
					system("COLOR A");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
						while(kimi_no_na_wa < suzume_no_tojimari){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUNOWA";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";

							kimi_no_na_wa--;
							
						}
					
				}


cin.get();
   
return 0;


}
















