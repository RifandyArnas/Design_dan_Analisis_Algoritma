

#include <iostream>
#include <string>

using namespace std;


void ahoy(){
	
	system("COLOR C");
	
		printf("\n\n====================TUGAS PERTEMUAN 9====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string t("30 Mei 2024 ");
		string v("30 Mei 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		t.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<t<<"||"<<v;
	
		printf("\n\n>>>>>>>>>>>>>>>>>>>Binary Tree<<<<<<<<<<<<<<<<<<<\n\n");
	
}


struct Ranting_Pohon{
	
    int zeya_data;
    
    Ranting_Pohon* kiri;
    
    Ranting_Pohon* kanan;


    Ranting_Pohon(int value) : zeya_data(value), kiri(nullptr), kanan(nullptr) {}
    
};


void pemasukanNode(Ranting_Pohon*& akar, int value) {
	
    if (akar == nullptr) {
    	
        akar = new Ranting_Pohon(value);
        
    } 
	
	else {
		
        if (value < akar->zeya_data) {
        	
            pemasukanNode(akar->kiri, value);
            
        } 
		
		else {
			
            pemasukanNode(akar->kanan, value);
            
        }
        
    }
    
}


void pre_order(Ranting_Pohon* akar) {
	
    if (akar != nullptr) {
    	
        cout<<akar->zeya_data<<" ";
        
        	pre_order(akar->kiri);
        
        	pre_order(akar->kanan);
        
    }
    
}


void in_order(Ranting_Pohon* akar) {
	
    if (akar != nullptr) {
    	
        in_order(akar->kiri);
        
        cout<<akar->zeya_data<<" ";
        
        in_order(akar->kanan);
        
    }
    
}


void post_order(Ranting_Pohon* akar) {
	
    if (akar != nullptr) {
    	
        post_order(akar->kiri);
        
        post_order(akar->kanan);
        
        cout<<akar->zeya_data<<" ";
        
    }
    
}



int main() {
	
system("cls");

	ahoy();
	
	system("COLOR E");
	
	int pilihan; int kimi_wa_kanata; int boku_no_kokoro_no_yabai_yatsu;
		
		boku_no_kokoro_no_yabai_yatsu=1;
		
		kimi_wa_kanata=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]Flying to Oxia";
			cout<<"\n[3]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto terbang;
					
				}
				
				else if(pilihan==2){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);
					
				}
				
				else{
					
					system("cls");
					
					system("COLOR 2");
					
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
						while(boku_no_kokoro_no_yabai_yatsu < kimi_wa_kanata){
							
							cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
							cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUN";
							cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
							
							boku_no_kokoro_no_yabai_yatsu--;
							
						}
					
				}
	

terbang:
	
	system("cls");
	
	system("COLOR 3");
	
		printf("\n\n==============================================================================\n");
		
		printf("Flying to Oxia Program");
		
		printf("\n==============================================================================\n\n");
		
		printf("\n\n==============================================================================\n");
		
		printf("Modul Halaman 65");
		
		printf("\n==============================================================================\n\n");
			
			Ranting_Pohon* akar = nullptr;
		
			    pemasukanNode(akar, 12); //15 adalah angka dari soal di modul hal 60
			    pemasukanNode(akar, 16); //30 adalah angka dari soal di modul hal 60
			    pemasukanNode(akar, 20); //27 adalah angka dari soal di modul hal 60
			    pemasukanNode(akar, 24); //25 adalah angka dari soal di modul hal 60
			    pemasukanNode(akar, 32); //29 adalah angka dari soal di modul hal 60
		
				    cout<<"Pre-order traversal\t: ";
				    
				    	pre_order(akar);
				    
				    		cout<<endl<<endl;
				
				    cout<<"In-order traversal\t: ";
				    
					    in_order(akar);
					    
					    	cout<<endl<<endl;
				
				    cout<<"Post-order traversal\t: ";
				    
					    post_order(akar);
					    
					    	cout<<endl<<endl;
		
		printf("==============================================================================\n\n");
			
			int pilihan2;
			
				cout<<"Pilih nomor di bawah ini!";
				
				cout<<endl;
				
				cout<<"\n[1]Back to Flying to Oxia Program";
				cout<<"\n[2]Exit Program";
				
				cout<<endl<<endl;
				
				cout<<"Pilihan kamu [1/2]: ";
				
				cin>>pilihan2;
				
					if(pilihan2==1){
						
						goto terbang;
						
					}
			
					
					else if(pilihan2==2){
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						
						exit(0);
						
					}
					
					else{
						
						exit(0);
						
					}
		
		
	
					
cin.get();
			
return 0;

}
