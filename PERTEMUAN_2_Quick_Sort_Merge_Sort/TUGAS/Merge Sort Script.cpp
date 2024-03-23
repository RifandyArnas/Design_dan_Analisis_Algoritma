

#include <iostream>
#include <string>

using namespace std;


void Sorting(int sort[], int size) {
	
    for (int i = 0; i < size; i++) {
    	
        cout<<sort[i];
        
        if(i < size - 1) cout<<", ";
        
    }
    
    cout<<"]"<<endl;
}

void merge(int sort[], int low, int mid, int high, int& sekai, int& yume) {
    
	int hidarinosize = mid - low + 1;
	
    int miginosize = high - mid;

    int hidari[hidarinosize];
    
    int migi[miginosize];

    for (int i = 0; i < hidarinosize; i++) {
    	
        hidari[i] = sort[low + i];
        
        yume++;
    }
    
    for (int j = 0; j < miginosize; j++) {
    	
        migi[j] = sort[mid + 1 + j];
        
        yume++;
        
    }

    int i=0, j=0, k=low;

    while (i < hidarinosize && j < miginosize) {
    	
        sekai++;
        
        if (hidari[i] >= migi[j]) { 
        
            sort[k] = hidari[i];
            
            i++;
            
        } 
		
		else {
			
            sort[k] = migi[j];
            
            j++;
        }
        
        k++;
        
        yume++;
    }

    while (i < hidarinosize) {
    	
        sort[k] = hidari[i];
        
        i++;
        
        k++;
        
        yume++;
    }

    while (j < miginosize) {
    	
        sort[k] = migi[j];
        
        j++;
        
        k++;
        
        yume++;
    }
}

void MergeSort(int sort[], int low, int high, int& sekai, int& yume) {
	
    if (low < high) {
    	
        int mid = low + (high - low) / 2;

        cout<<"Proses pemecahan list [";
        
        Sorting(sort + low, mid - low + 1);

        MergeSort(sort, low, mid, sekai, yume);

        cout<<"Proses pemecahan list [";
        
        Sorting(sort + mid + 1, high - mid);
        
        MergeSort(sort, mid + 1, high, sekai, yume);

        cout<<"Proses penggabungan list [";
        
        Sorting(sort + low, high - low + 1);
        
        merge(sort, low, mid, high, sekai, yume);
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
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>Merge Sort<<<<<<<<<<<<<<<<<<<<\n\n");
	
		int pilihan; int kimi_no_na_wa; int tenki_no_ko;
		
		kimi_no_na_wa=1;
		
		tenki_no_ko=2;
		
			cout<<"List program kali ini: ";
			cout<<"\n\n[1]SPARKLE";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto sparkle;
					
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
				
sparkle:
	
	system("cls");
	
	system("COLOR B");
	
	printf("\n\n////////////////////SPARKLE////////////////////\n\n");
			
			cout<<"Selamat datang di program SPARKLE!\n";
			cout<<"Program ini akan menyortir angka dengan metode Merge Sort!\n";
			cout<<"Selamat menikmati!";
			
			cout<<endl<<endl<<endl;
			
		
		int sayonara[] = {2, 5, 60, 43, 27, 10, 89, 17};
		
    	int size = sizeof(sayonara) / sizeof(sayonara[0]);
    	
    	int sekai=0, yume=0;

    		cout<<"Data awal: [";
    		
    Sorting(sayonara, size);

    MergeSort(sayonara, 0, size - 1, sekai, yume);

    		cout<<"\nData terurut secara descending: [";
    		
    Sorting(sayonara, size);
    
    		
    		cout<<"\n\nMau mengulang program atau langsung exit?";
			cout<<"\n\n[1]Mengulang program SPARKLE";
			cout<<"\n[2]Exit Program";
			
			cout<<endl<<endl;
			
			cout<<"Pilihan kamu [1/2/?]: "; 
			
			cin>>pilihan;
			
				if(pilihan==1){
					
					goto sparkle;
					
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





