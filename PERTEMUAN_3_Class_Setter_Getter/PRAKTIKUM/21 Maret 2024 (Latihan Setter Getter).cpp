

#include <iostream>
#include <string>

using namespace std;

class Ryugakksei{
	
	private:
		
		string nama;
		
		int npm;
		
	public:
		
		void setNama(string n){
			
			nama=n;
			
		}
		
		void setNpm(int np){
			
			npm=np;
			
		}
		
		string getNama(){
			
			return nama;
			
		}
		
		int getNpm(){
			
			return npm;
			
		}
	
	
};

int main(){
	
	Ryugakksei ryugakksei;
	
	string nama;
	
	int npm;
	
	int n;
	
	cout<<"\n\nAnata no namae wa: ";
	getline(cin, nama);
	
	ryugakksei.setNama(nama);
	
	cout<<"\n\nAnata no Npm: ";
	
	cin>>npm;
	
	ryugakksei.setNpm(npm);
	
	cout<<"\n\nRyugakksei (mahasiswa): ";
	
	cout<<"\n\nNamae: "<<ryugakksei.getNama();
	
	cout<<"\n\nNPM: "<<ryugakksei.getNpm();	
	

cin.get();

return 0;

	
}

































































































