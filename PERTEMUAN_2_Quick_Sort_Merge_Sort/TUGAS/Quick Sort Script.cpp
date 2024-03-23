

#include <iostream>
#include <string>

using namespace std;

void Sorting(int sort[], int size) {
	
    for (int i = 0; i < 10; i++) {
    	
        cout << sort[i] << " ";
        
    }
    
    cout << endl;
}

int partisi(int sort[], int low, int high) {
	
    int pivot = sort[high];
    
    int i = low - 1;

    for (int j = low; j < high; j++) {
    	
        if (sort[j] > pivot) {
        	
            i++;
            
            swap(sort[i], sort[j]);
        }
    }
    
    swap(sort[i + 1], sort[high]);
    
    return i + 1;
}

void QuickSort(int sort[], int low, int high) {
	
    if (low < high) {
    	
        int fubuki = partisi(sort, low, high);

        Sorting(sort, high + 1); 

        QuickSort(sort, low, fubuki - 1);
        
        QuickSort(sort, fubuki + 1, high);
    }
}


int main(){
	
system("COLOR F");

	printf("\n\n====================TUGAS PERTEMUAN 2====================\n\n");
	
		string nma("RIFANDY ARNAS");
		string nim("232310001");
		string kls("TI-23-PA ");
		
		kls.append("(LAB 2)");
		
		string mtkl("Design dan Analisis Algoritma");
		string tgl("22 Maret 2024 ");
		
		tgl.append("(Pembuatan Script)");
		
			cout<<"Nama\t: "<<nma;
			cout<<"\nNIM\t: "<<nim;
			cout<<"\nKelas\t: "<<kls;
			cout<<"\n\nMatkul\t: "<<mtkl;
			cout<<"\nTanggal\t: "<<tgl;
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>Quick Sort<<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kimi_no_na_wa; int tenki_no_ko;
		
		kimi_no_na_wa=1;
		
		tenki_no_ko=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]GAKKOU";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto gakkou;
					
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

gakkou:
	
	system("cls");
	
	system("COLOR E");
	
	printf("\n\n////////////////////GAKKOU////////////////////\n\n");
			
			cout<<"Selamat datang di program GAKKOU!\n";
			cout<<"Program ini akan menyortir angka dengan metode Quick Sort!\n";
			cout<<"Selamat menikmati!";
			
			cout<<endl<<endl<<endl;
			
				
		int fortune[] = {67, 91, 87, 33, 49, 10, 16, 43, 65, 3};
		
    	int size = sizeof(fortune) / sizeof(fortune[0]);

    		cout<<"Data yang akan di sort: ";
    		
    Sorting(fortune, size);
    
    		cout<<endl;

    		cout<<"Quick Sort: "<<endl;
    		
    QuickSort(fortune, 0, size - 1);

			
			cout<<"\n\nMau mengulang program atau langsung exit?";
			cout<<"\n\n[1]Mengulang program GAKKOU";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto gakkou;
					
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



return 0;
	
}







