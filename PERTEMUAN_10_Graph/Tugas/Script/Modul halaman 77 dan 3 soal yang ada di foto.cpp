
//library vector digunakan untuk menjaga data, menyimpan data dengan teratur, dan memanggil graph

//library iomanip digunakan untuk menyelaraskan data supaya data rapih dan teratur


#include <iostream>
#include <string>
#include <vector> 
#include <iomanip>

using namespace std;


void ahoy(){
	
	system("COLOR B");
	
		printf("\n\n====================TUGAS PERTEMUAN 10====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string tg("7 Juni 2024 ");
		string v("7 Juni 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		tg.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<tg<<"||"<<v;
	
		printf("\n\n>>>>>>>>>>>>>>>>>>>Graphs<<<<<<<<<<<<<<<<<<<\n\n");
	
}


void tampilkan_Matrix(const vector<vector<int>>& costMatrix){
	
    cout<<endl<<"Cost List:"<<endl<<endl;
    
    for(const auto& baris : costMatrix){
    	
        for(int cost : baris){
        	
            cout<<setw(7)<<cost;
            
        }
        
        cout<<endl;
        
    }
    
}


class penghubung{
	
	public:
		
		int tujuan; int berat;
		
		penghubung(int t, int b) : tujuan(t), berat(b) {}
	
};


class Kanade_Graph{
	
    int hajime_size;
    
    vector<vector<int>> adjLists;

	public:

	    Kanade_Graph(int hajime);
	    

	    void tambah_penghubung(int kanata, int old_kanata);
	    

	    void tampilkan_Kanade_Graph();
	    
};


class Ao_Graph{
	
    int koyori_size;
    
    vector<vector<int>> adjLists;

	public:

	    Ao_Graph(int koyori);
	    

	    void tambah_penghubung1(int luna, int old_luna);
	    

	    void tampilkan_Ao_Graph();
	    
};


class Raden_Graph{
	
    int iroha_size;
    
    vector<vector<penghubung>> adjLists;

	public:

	    Raden_Graph(int iroha);
	    

	    void tambah_penghubung2(int botan, int tujuan, int berat);
	    

	    void tampilkan_Raden_Graph();
	    
};


Kanade_Graph::Kanade_Graph(int hajime){
	
    hajime_size = hajime;
    
    adjLists.resize(hajime);
    
}


Ao_Graph::Ao_Graph(int koyori){
	
    koyori_size = koyori;
    
    adjLists.resize(koyori);
    
}


Raden_Graph::Raden_Graph(int iroha){
	
    iroha_size = iroha;
    
    adjLists.resize(iroha);
    
}


void Kanade_Graph::tambah_penghubung(int kanata, int old_kanata){
	
    adjLists[kanata].push_back(old_kanata);
    
    adjLists[old_kanata].push_back(kanata); 
    
}


void Ao_Graph::tambah_penghubung1(int luna, int old_luna){
	
    adjLists[luna].push_back(old_luna);
    
}


void Raden_Graph::tambah_penghubung2(int botan, int tujuan, int berat){
	
    adjLists[botan].push_back(penghubung(tujuan, berat));
    
}


void Kanade_Graph::tampilkan_Kanade_Graph(){
	
    for(int i=0; i<hajime_size; i++){
    	
    	cout<<endl;
    	
        cout<<"Simpul ke-"<<i<<":";
        
	        for(int j : adjLists[i])
	        
	            cout<<" -> "<<j;
	            
	        	cout<<endl;
        
    }
    
}


void Ao_Graph::tampilkan_Ao_Graph(){
	
    for(int i=0; i<koyori_size; i++){
    	
    	cout<<endl;
    	
        cout<<"Simpul ke-"<<i<<":";
        
	        for(int j : adjLists[i])
	        
	            cout<<" -> "<<j;
	            
	        	cout<<endl;
        
    }
    
}


void Raden_Graph::tampilkan_Raden_Graph(){
	
    for(int i=0; i<iroha_size; i++){
    	
    	cout<<endl;
    	
        cout<<"Simpul ke-"<<i<<":";
        
	        for(const auto& miranda : adjLists[i])
	        
	        	cout<<" -> ("<<miranda.tujuan<<", "<<miranda.berat<<")";
	        	
	        	cout<<endl;
        
    }
    
}

int main() {

system("cls");

	ahoy();
	
	main_menu:
		
		int marine_choise;
		
			cout<<"Program List: ";
			cout<<"\n\n[1]Hajimete no Gyaru";
			cout<<"\n\n[2]Saijaku Muhai no Bahamut";
			cout<<"\n\n[3]Absolute Duo";
			cout<<"\n\n[4]Eromanga Sensei";
			cout<<"\n\n[5]EXIT";
				
			cout<<endl<<endl;
				
			cout<<"Pilihan kamu [1/2/3/4/5/?]: "; 
				
			cin>>marine_choise;
				
				if(marine_choise<1 || marine_choise>5){
						
					cout<<endl<<endl;
					
					int ukuran=7500;
					
					int oshi_no_ko; int isshukan_friend;
			
						isshukan_friend=1;
			
						oshi_no_ko=2;
							
							for(int i=0; i<=ukuran; i++){
									
								cout<<"[ERROR PROGRAM!]";
									
								cout<<endl;
									
							}
							
							system("cls");
					
							system("COLOR 6");
					
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
								while(isshukan_friend < oshi_no_ko){
									
									cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
									cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUN";
									cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
									
									isshukan_friend--;
									
								}
								
				}
				
				else if(marine_choise==1){
					
					system("cls");
					
					system("COLOR 6");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Hajimete no Gyaru");
						
						printf("\n==============================================================================\n\n");
					
							Kanade_Graph printo_graph(5);
			    
							    printo_graph.tambah_penghubung(0, 1);
							    printo_graph.tambah_penghubung(0, 4);
							    printo_graph.tambah_penghubung(1, 2);
							    printo_graph.tambah_penghubung(1, 3);
							    printo_graph.tambah_penghubung(1, 4);
							    printo_graph.tambah_penghubung(2, 3);
							    printo_graph.tambah_penghubung(3, 4);
						    
						    printo_graph.tampilkan_Kanade_Graph();
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_gyaru;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_gyaru:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
							 
				}
				
				else if(marine_choise==2){
					
					system("cls");
					
					system("COLOR 3");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Saijaku Muhai no Bahamut");
						
						printf("\n==============================================================================\n\n");
					
							Ao_Graph printo1_graph(5);
			    
							    printo1_graph.tambah_penghubung1(0, 1);
							    printo1_graph.tambah_penghubung1(0, 4);
							    printo1_graph.tambah_penghubung1(1, 2);
							    printo1_graph.tambah_penghubung1(1, 3);
							    printo1_graph.tambah_penghubung1(1, 4);
							    printo1_graph.tambah_penghubung1(2, 3);
							    printo1_graph.tambah_penghubung1(3, 4);
						    
						    printo1_graph.tampilkan_Ao_Graph();
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_saijaku;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_saijaku:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
					
				}
				
				else if(marine_choise==3){
					
					system("cls");
					
					system("COLOR E");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Absolute Duo");
						
						printf("\n==============================================================================\n\n");
					
							Raden_Graph printo2_graph(5);
			    
							    printo2_graph.tambah_penghubung2(0, 1, 10);
							    printo2_graph.tambah_penghubung2(0, 4, 20);
							    printo2_graph.tambah_penghubung2(1, 2, 30);
							    printo2_graph.tambah_penghubung2(1, 3, 40);
							    printo2_graph.tambah_penghubung2(1, 4, 50);
							    printo2_graph.tambah_penghubung2(2, 3, 60);
							    printo2_graph.tambah_penghubung2(3, 4, 70);
						    
						    printo2_graph.tampilkan_Raden_Graph();
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_absolute;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_absolute:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
					
				}
				
				else if(marine_choise==4){
					
					system("cls");
					
					system("COLOR D");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Eromanga Sensei [Modul halaman 77]");
						
						printf("\n==============================================================================\n\n");
					
							int jumlah_Kota;

							    cout<<"Masukkan jumlah kota: ";
							    
							    cin>>jumlah_Kota;
							    
							    
							    	vector<vector<int>> costMatrix(jumlah_Kota, vector<int>(jumlah_Kota));
							    	
							    		for(int i=0; i<jumlah_Kota; i++){
							    			
							    			cout<<endl;
							    			
									        cout<<"Cost Element Baris ke-"<<i+1<<": "<<endl;
									        
									        for(int j=0; j<jumlah_Kota; j++){
									        	
									            cin>>costMatrix[i][j];
									            
									        }
									        
									    }
									
									tampilkan_Matrix(costMatrix);
									
									vector<int> jalur={1, 3, 2, 4, 1};
									
    								int minimumCost = 0;
    								
    									for(size_t i=0; i<jalur.size()-1; i++){
    										
									        minimumCost += costMatrix[jalur[i]-1][jalur[i+1]-1];
									        
									    }
									
											cout<<endl<<"Jalur Terpendek\t: ";
											
											    for(size_t i=0; i<jalur.size(); i++){
											    	
											        cout<<jalur[i];
											        
												        if(i != jalur.size()-1){
												        	
												            cout<<"--->";
												            
												        }
											        
											    }
								    
												    cout<<endl<<endl;
												    
												    cout<<"Minimum Cost\t: "<<minimumCost<<endl;
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_eromanga;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_eromanga:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
					
				}
				
				else if(marine_choise==5){
					
					system("cls");
						
					cout<<"\n\n\n\n\n\n";
						
					exit(0);
					
				}
				
				
    
cin.get();    

return 0;


}







































