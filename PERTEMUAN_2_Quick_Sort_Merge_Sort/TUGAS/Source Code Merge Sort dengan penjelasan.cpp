

#include <iostream>

using namespace std;

//Void merge (atau nama terserah kita), adalah sebuah fungsi. Fungsi ini kita
//gunakan untuk melakukan proses sorting dari element-element array

void merge (int arr[], int l, int m, int r)
{
	int x, y, z;
	
	//int n1=m-l+1 adalah size dari array kiri
	
	int n1 = m - l + 1;
	
	//int n2=r-m adalah size dari array kanan
	
	int n2 = r - m;
	
	//int L[n1],R[n2] berfungsi untuk membuat array kiri dan kanan
	
	int L[n1], R[n2];
	
	for (x = 0; x < n1; x++)
        L[x] = arr[l + x];
	for (y = 0; y < n2; y++)
	    R[y] = arr[m + 1 + y];
	    
	x = 0;
	y = 0;
	z = l;
	
	while(x < n1 && y < n2) 
	{
		if (L[x] <= R[y]) 
		{
			//menempatkan nilai yang lebih kecil dari element pada array kiri
			//menuju ke array hasil
			
			arr[z] = L[x];
			x++;
		}
		else 
		{
			
			//menempatkan nilai yang lebih kecil dari element pada array kanan
			//menuju ke array hasil
			
			arr[z] = R[y];
			y++;
		}
		z++;
	}
	while (x < n1) 
	{
		arr[z] = L[x];
		x++;
		z++;
	}
	
	while (y < n2) 
	{
		
		//menempatkan sisa nilai yang masih ada di array kiri
		arr[z] = R[y];
		y++;
		z++;
	}
}

//Void mergesort (atau nama terserah kita), adalah sebuah fungsi. Fungsi ini kita
//gunakan untuk melakukan proses sortir atau mengurutkan array dan nantinya
//ditampilkan pada bagian utama (int main)

void mergesort(int arr[], int l, int r)
{
	if (l < r) 
	{
		
		//int m-l+(r-l)/2 digunakan untuk memmbagi array menjadi dua array kecil
		
		int m = l + (r - l) / 2;
		
		//mergesort(arr,l,m) digunakan untuk sorting element pada array kiri
		
		mergesort (arr, l, m);
		
		//mergesort(arr,m+1,r) digunakan untuk sorting element pada array kanan
		
		mergesort (arr, m + 1, r);
		
		//merge digunakan untuk menggabungkan element pada array kiri dan kanan  
		//yang sudah diurutkan
		
		merge(arr, l, m, r);
	}
}

//Void show (atau nama terserah kita), adalah sebuah fungsi. Fungsi ini kita 
//gunakan untuk menampilkan element pada array yang sudah di sorting ke tampilan
//utama (int main)

void show(int A[], int size)
{
	int i;
	
	for (i = 0; i < size; i++) 
		cout << A[i] << " ";
}

int main() {
	
    int size;
    

    cout << "Masukan banyak data : ";
    
    cin >> size;

	//int* arr digunakan untuk mengalokasikan memori untuk array
	
    int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{

		cout << "\nMasukkan Data Array ke - " << i << " = ";
		
		cin >> arr[i];
	}
	
	//mergsort(arr,0,size-1) berarti memanggil fungsi Void mergesort

    mergesort(arr, 0, size - 1);

    cout << "Hasil : ";
    
    //show(arr,size) berarti memanggil fungsi Void show
    
    show(arr, size);


return 0;

}







