

#include <iostream>
#include <queue>

using namespace std;


int main() {
	
antrian:
	
	cout<<endl<<endl;
	
    queue<int> studentQueue;
    
    int masuk;
	
	cout<<"1. Tampilkan nomor peserta ke 1 sampai ke 3"<<endl;
	cout<<"2. Tampilkan semua nomor peserta dalam antrian"<<endl;
	cout<<"3. Keluar dari program"<<endl;
	
	cout<<"Masukan pilihan [1/2/3]\t: ";
	
	cin>>masuk;
	
	cout<<endl<<endl;

	
		if(masuk==1){
			
			studentQueue.push(5);
    		studentQueue.push(6);
    		studentQueue.push(12);

    		cout << "Ukuran Antiran: " << studentQueue.size() << endl;

    		while (!studentQueue.empty()) {
    	
        			int studentNumber = studentQueue.front();
        
        			studentQueue.pop();
        
        			cout << "Nomor peserta: " << studentNumber << endl;
    		}
			
		}
		
		if(masuk==2){
			
			cout<<"Nomor peserta dalam antrian: 5, 6, 12"<<endl;
			
		}
		
		if(masuk==3){
			
			exit(0);
			
		}
		
		string ketik;
		
	
		cout<<endl<<"Apakah ingin memilih lagi?"<<endl<<endl;
		
		cout<<"Ketik [iya] jika mau, ketik [tidak] jika mau keluar";
		
		cout<<"Ketik: ";
		
		cin>>ketik;
		
			if(ketik=="iya"||ketik=="ya"||ketik=="Iya"||ketik=="IYA"){
				
				goto antrian;
				
			}
			
			else{
				
				exit(0);
				
			}


    return 0;
}















