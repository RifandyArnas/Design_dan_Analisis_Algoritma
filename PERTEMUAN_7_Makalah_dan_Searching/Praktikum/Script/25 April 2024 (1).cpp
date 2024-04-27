#include <iostream>

using namespace std;

int main(){
	
	int Nilai[20]; int Posisi[20]; 
	
	int i, n, Bil, jmlh=0;
	
	bool ketemu;
	
		cout<<"Masukkan jumlah deret bilangan = ";
		
		cin>>n;
		
		cout<<endl;
		
			for(int i=0; i<n; i++){
				
				cout<<"Nilai bilangan ke- "<<i<<" = ";
				
				cin>>Nilai[i];
				
			}
			
		cout<<"\nDeret Bilangan = ";
		
			for(int i=0; i<n; i++){
				
				cout<<Nilai[i]<<" ";
				
			}
			
		cout<<"\nMasukkan bilangan yang akan dicari = ";
		
		cin>>Bil;
		
			for(int i=0; i<n; i++){
				
				if(Nilai[i]==Bil){
					
					ketemu=true;
					
					Posisi[jmlh]=i;
					
					jmlh++;					
				}
				
			}
			
			if(ketemu){
				
				cout<<"Bilangan "<<Bil<<" ditemukan sebanuak "<<jmlh;
				
				cout<<"\nPada posisi ke - ";
				
					for(int i=0; i<jmlh; i++){
						
						cout<<Posisi[i]<<" ";
						
					}
				
			}
			
			else{
				
				cout<<"Maaf, bilangan "<<Bil<<" tidak ditemukan";
				
				getchar();
				
			}
		
cin.get();

return 0;
	
}


































































































