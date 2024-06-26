

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;


void ahoy(){
	
	system("COLOR 6");
	
		printf("\n\n====================TUGAS PERTEMUAN 13====================\n\n");
	
		string n("RIFANDY ARNAS");
		string i("232310001");
		string k("TI-23-PA ");
		string tg("26 Juni 2024 ");
		string v("26 Juni 2024 ");
		string m("Design dan Analisis Algoritma");
		
		k.append("(LAB 2)");
		tg.append("(Pembuatan Script)");
		v.append("(Penulisan Google Docs)");
		
			cout<<"Nama\t: "<<n;
			cout<<"\nNIM\t: "<<i;
			cout<<"\nKelas\t: "<<k;
			cout<<"\n\nMatkul\t: "<<m;
			cout<<"\nTanggal\t: "<<tg<<"||"<<v;
	
		printf("\n\n>>>>>>>>>>>>>>>>>>>Hash Tables<<<<<<<<<<<<<<<<<<<\n\n");
	
}


class double_hashing{
	
	private:
		
	    vector<int>table;
	    
	    vector<bool>occupied;
	    
	    int ukuran_table; int prima;
	
		    int hash1(int key){
		    	
		        return key % ukuran_table;
		        
		    }
	
		    int hash2(int key){
		    	
		        return prima - (key % prima);
		        
		    }
	
	public:
		
	    double_hashing(int ukuran, int prima) : ukuran_table(ukuran), prima(prima){
	    	
	        table.resize(ukuran_table, -1); 
	        
	        occupied.resize(ukuran_table, false);
	        
	    }
	
	    void insert(int key){
	    	
	        int index = hash1(key);
	        
	        int stepSize = hash2(key);
	
	        for (int i=0; i < ukuran_table; i++){
	        	
	            if (!occupied[index]){
	            	
	                table[index] = key;
	                
	                occupied[index] = true;
	                
	                return;
	                
	            }
	            
	            index = (index + stepSize) % ukuran_table;
	            
	        }
	        
	        throw overflow_error("[PERINGATAN]Hash Table Kepenuhan!!");
	        
	    }
	
	    bool search(int key){
	    	
	        int index = hash1(key);
	        
	        int stepSize = hash2(key);
	
	        for (int i=0; i < ukuran_table; i++){
	        	
	            if (table[index] == key){
	            	
	                return true;
	                
	            }
	            
	            if (!occupied[index]){
	            	
	                return false;
	                
	            }
	            
	            index = (index + stepSize) % ukuran_table;
	            
	        }
	        
	        return false;
	        
	    }
	
	    void remove(int key){
	    	
	        int index = hash1(key);
	        
	        int stepSize = hash2(key);

	        for (int i=0; i < ukuran_table; i++){
	        	
	            if (table[index] == key){
	            	
	                table[index] = -1;
	                
	                occupied[index] = false;
	                
	                return;
	                
	            }
	            
	            if (!occupied[index]){
	            	
	                return;
	                
	            }
	            
	            index = (index + stepSize) % ukuran_table;
	            
	        }
	        
	    }
	
	    void display(){
	    	
	        for (int i=0; i < ukuran_table; i++){
	        	
	            if (occupied[i]){
	            	
	            	cout<<i<<" --> "<<table[i]<<endl;
	            	
	            } 
				
				else{
					
	                cout<<i<<" --> "<<"kosong"<<endl;
	                
	       		}
	       		
	        }
	        
	    }
	    
};


class HashTable{
	
	private:
		
	    int ukuran;
	    
	    vector<list<int>> table;
	
	    int hashFunction(int key){
	    	
	        return key % ukuran;
	        
	    }
	
	public:
		
	    HashTable(int ukuran){
	    	
	        this->ukuran = ukuran;
	        
	        table.resize(ukuran);
	        
	    }
	
	    void insert(int key){
	    	
	        int index = hashFunction(key);
	        
	        table[index].push_back(key);
	        
	    }
	
	    bool search(int key){
	    	
	        int index = hashFunction(key);
	        
	        for(int x : table[index]){
	        	
	            if(x == key){
	            	
	                return true;
	                
	            }
	            
	        }
	        
	        return false;
	        
	    }
	
	    void display(){
	    	
	        for(int i=0; i < ukuran; i++){
	        	
	            cout<< i<<" ---> ";
	            
	            if(table[i].empty()){
	            	
	                cout<<"kosong";
	                
	            } 
				
				else{
					
	                for(int x : table[i]){
	                	
	                    cout<<x<<" ";
	                    
	                }
	                
	            }
	            
	            cout<<endl;
	            
	        }
	        
	    }
	    
};


int main(){
	
	system("cls");

	ahoy();
	
	main_menu:
		
		int marine_choise;
		
			cout<<"Program List: ";
			cout<<"\n\n[1]Byoshoku 5 Centimeter";
			cout<<"\n\n[2]Dareka Tasukete";
			cout<<"\n\n[3]EXIT";
				
			cout<<endl<<endl;
				
			cout<<"Pilihan kamu [1/2/3/?]: "; 
				
			cin>>marine_choise;
			
				if(marine_choise<1 || marine_choise>3){
						
					cout<<endl<<endl;
					
					int ukuran=7500;
					
					int rukojouma_no_rikyakusha; int kanojo_ga_rokuden;
			
						kanojo_ga_rokuden=1;
			
						rukojouma_no_rikyakusha=2;
							
							for(int i=0; i<=ukuran; i++){
									
								cout<<"[ERROR PROGRAM!]";
									
								cout<<endl;
									
							}
							
							system("cls");
					
							system("COLOR B");
					
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
					
					
								while(kanojo_ga_rokuden < rukojouma_no_rikyakusha){
									
									cout<<"MOSHIKOSHITAKEDEIATOSHIKOSHITAKEDEI";
									cout<<"URESHIKITEKENAKUNOWA KANASHITEKUWARAUN";
									cout<<"KIMINOKOKOROGAKIMIOOSHIKOSHITANDAYO";
									
									kanojo_ga_rokuden--;
									
								}
								
				}
				
				else if(marine_choise==1){
					
					system("cls");
					
					system("COLOR 3");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Byoshoku 5 Centimeter");
						
						printf("\n==============================================================================\n\n");
					
							int ukuran_table = 7;
    
						    int prima = 5; 
						
						    	double_hashing hashTable(ukuran_table, prima);
						
								    hashTable.insert(10);
								    hashTable.insert(22);
								    hashTable.insert(31);
								    hashTable.insert(4);
								    hashTable.insert(15);
								    hashTable.insert(28);
								    hashTable.insert(17);
						
						    			cout<<"Hash Table:"<<endl;
						    
						    	hashTable.display();
						
						    			cout<<endl;
						
						    int searchKey = 15;
						    
							    if (hashTable.search(searchKey)){
							    	
									cout<<searchKey<<" ditemukan di dalam Hash Table"<<endl<<endl;
									
							    } 
							
								else{
									
							        cout<<searchKey<<" tidak ditemukan di dalam Hash Table"<<endl<<endl;
							        
							    }
						
						    hashTable.remove(15);
						
						    	cout<<"Hash Table setelah menghapus 15:"<<endl;
						    
						    hashTable.display();
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_byoshoku;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_byoshoku:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
							 
				}
				
				else if(marine_choise==2){
					
					system("cls");
					
					system("COLOR 2");
					
						printf("\n\n==============================================================================\n");
			
						printf("Irasshaimase~~");
						
						printf("\n==============================================================================\n\n");
						
						printf("\n\n==============================================================================\n");
						
						printf("Dareka Tasukete [Modul halaman 106]");
						
						printf("\n==============================================================================\n\n");
					
							int ukuran, angka;

							    	cout<<"Masukan ukuran table hash: ";
							    
							    	cin>>ukuran;
							
							    HashTable hashTable(ukuran);
						
						    		cout<<"Masukan jumlah elemen yang akan disisipkan: ";
						    
						    		cin>>angka;
						
						    		cout<<"Masukan "<<angka<<" elemen:"<<endl;
						    
							    for(int i=0; i < angka; i++){
							    	
							        int element;
							        
							        cin>>element;
							        
							        	hashTable.insert(element);
							        
							    }
						
						    		cout<<"\nIsi Table Hash:"<<endl;
						    
						    	hashTable.display();
						
						    int searchElement;
						    
						    	cout<<"\nMasukan elemen yang ingin dicari dalam Table Hash: ";
						    
						    	cin>>searchElement;
						
								    if(hashTable.search(searchElement)){
								    	
								        cout<<searchElement<<" ditemukan dalam Table Hash"<<endl;
								        
								    } 
							
									else{
										
								        cout<<searchElement<<" tidak ditemukan dalam Table Hash"<<endl;
								        
								    }
						
						printf("\n==============================================================================\n\n");
						
							string type;
							
								cout<<"Do you want to leave the program? [yes/no]";
								
								cout<<endl<<endl;
								
								cout<<"please type [yes] or [no]\t: ";
								
								cin>>type;
								
									if(type=="yes"||type=="Yes"||type=="YES"){
										
										goto exit_tasukete;
										
									}
									
									else{
										
										system("cls");
										
										system("COLOR B");
										
											cout<<endl<<endl;
										
												goto main_menu;
										
									}
					
					exit_tasukete:
						
						system("cls");
						
						cout<<"\n\n\n\n\n\n";
						
						exit(0);
					
				}
				
				else if(marine_choise==3){
					
					system("cls");
					
					cout<<endl<<endl<<endl<<endl<<endl;
					
					exit(0);					
				}
				

cin.get();

return 0;
	
}
































































































