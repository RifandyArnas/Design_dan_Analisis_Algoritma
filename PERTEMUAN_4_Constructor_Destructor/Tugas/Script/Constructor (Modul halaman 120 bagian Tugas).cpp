

#include <iostream>
#include <string>

using namespace std;


class contoh { //sebuah struct class dengan nama "contoh"

    private:
    	
        int nilai; //sebuah integer privat dengan nama "nilai"

    public:
    	
        contoh(int n){ //public: contoh adalah constructor dengan parameter
        			   //sebuah integer dengan nama "n"
        				
            nilai=n; //sebuah proses dimana nilai adalah n
            
        }

        int getNum() { //integer getNum() berfungsi untuk mengambil atau "get"
        
            return nilai; //pada konteks ini, yang diambil oleh getNum() adalah nilai
        }
};


int main() {
	
    contoh obj(10); //contoh obj(10) adalah proses untuk membuat object atau "obj"
    				//dengan nilai adalah 10.Jika "obj" dihilangkan atau di delete
    				//maka program akan error

    cout<<"Nilai yang diinput: "<< obj.getNum()<<endl;
    
    //obj.getNum() -> mengambil nilai=n adalah 10
    
    //untuk mengganti nilai, bisa diganti pada proses "contoh obj("nilai")"
    
    //misalkan dengan "contoh obj(45)", maka obj.getNum() akan mengambil 
    //nilai=n adalah 45


	//Program ini termasuk ke dalam CONSTRUCTOR
	
	
    return 0;
    
}










