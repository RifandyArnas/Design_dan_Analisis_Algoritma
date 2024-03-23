

#include<iostream>

using namespace std;

//Void swap (atau nama terserah kita), adalah sebuah fungsi. Fungsi ini kita 
//gunakan untuk proses menukar antara dua elemen pada masing-masing array

 void swap(int arr[],int pos1,int pos2){
 	
 	int temp;
 	
 	temp=arr[pos1];
 	
 	arr[pos1]=arr[pos2];
 	
 	arr[pos2]=temp;
 	
 }

//int partition (atau nama terserah kita), digunakan untuk mengembalikan posisi
//elemen dari pivot setelah selesai di pisahkan

 int partition(int arr[],int low,int high,int pivot){
 	
 	int i=low;
 	
 	int j=low;
 		
 	while (i<=high){
 		
 		if(arr[i]>pivot){
 			
 			i++;
 			
		 }
		 
		 //Kalau element lebih kecil dari nilai atau index pivot, sistem akan
		 //menukar posisi array[i] dengan array[j]
		 
		 else{
		 	
		 	swap(arr,i,j);
		 	
		 	i++;
		 	
		 	j++;
		 }
	 }
	 
	 //return j-1 berfungsi untuk mengembalikan nilai pivot setelah di pisahkan
	 
	 return j-1;
 }
 
 
 //void quickSort (atau nama terserah kita), adalah sebuah fungsi. Fungsi ini kita
 //gunakan di bagian utama (int main), dan kita memanggil isi dari fungsi ini
 
 void quickSort(int arr[],int low,int high){
 		
 	if(low<high){
 		
 		//index atau nilai pivot diambil dari nilai [high] pada element array
 		
 		int pivot =arr[high];
 		
 		
 		//pos akan memanggil fungsi partition untuk mengembalikan posisi pivot
 		//setelah di pisahkan
 		int pos=partition(arr,low,high,pivot);
 		
 		//quicksort ini adalah proses pada bagian sebelah kiri dari element array
 			
 		quickSort(arr,low,pos-1);
 		
 		//quicksort ini adalah proses pada bagian sebelah kanan dari element array
 			
 		quickSort(arr,pos+1,high);
	 }
 }
 
 int main(){
 	
 	int n;
 	
 	cout<<"Tentukan Panjang Array : ";
 	
 	cin>>n;
 	
 	int arr[n];
 	
 	for(int i=0;i<n;i++){
 		
 		cin>>arr[i];
 		
	 }
	 
	 //quicksort(arr,0,n-1) adalah pemanggilan untuk fungsi Void quicksort yang
	 //sudah di buat di bagian atas
	 	
	 quickSort(arr,0,n-1);
	 

	 
	 cout<<"Berikut Adalah Array yang Telah Disortir :  ";
	 	
	 for(int i=0;i<n;i++){
	 	
	 	cout<<arr[i]<<" ";
	 	
	 }
	 
return 0;
	 
 }
 
 
 
 
