
#include <iostream>
#include <string>

using namespace std;

int binarySearch(string data[], string p, int k){ 

	int r= 0;
	 
	int u = k-1; 

		while (r <= u) { 

			int m = r+(u - r)/2; 

			int var= 2; 

				if (p == (data[m])) 
		
					var = 0; 

				if (var == 0) 
		
					return m; 

				if (p > (data[m])) 
		
					r = m + 1; 
		
				if(p < (data[m]))
		
					u = m -1;
		
		} 

	return -1; 
	
} 

int main(){
	
			string n;
		
			string Barang[]={"Buku", "Pensil", "Pulpen", "Penghapus", "Penggaris"};		
		
				cout<<"Masukan nama barang\t: ";
				
				cin>>n;

			int total=5;
			
			int f = binarySearch(Barang, n, total);
			
					if(f == -1){
						
						cout<<endl<<endl;
						
						cout<<"Maaf, "<<n<<" tidak ada di dalam daftar";
					}
					
					else{
					
					
						cout<<endl<<endl;
					
						cout<<"Barang "<<n<<" ditemukan";
						
						cout<<endl<<endl;
						
						if(n=="Buku"){
							
							cout<<n<<" ditemukan dengan harga 5000";
							
						}
						
						if(n=="Pensil"){
							
							cout<<n<<" ditemukan dengan harga 1000";
							
						}
						
						if(n=="Pulpen"){
							
							cout<<n<<" ditemukan dengan harga 2000";
							
						}
						
						if(n=="Penghapus"){
							
							cout<<n<<" ditemukan dengan harga 500";
							
						}
						
						if(n=="Penggaris"){
							
							cout<<n<<" ditemukan dengan harga 1500";
							
						}
						
					}
						
						
						
cin.get();

return 0;

}
