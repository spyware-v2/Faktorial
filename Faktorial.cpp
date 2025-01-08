#include <iostream>
using namespace std;

int main() {
    int a;
    long long faktorial = 1; 

    cout << "Masukkan angka : ";
    cin >> a;
	
    for (int i = 1; i <= a; i++) {
        faktorial *= i; 
    }
	
	
	if (a>1){
		cout << "Faktorial dari " << a << " adalah = " << faktorial << endl;
    	cout << "Alamat memori dari \""<<faktorial<<"\" adalah = "<< &faktorial << endl ;
	}
	
	else if (a<0){
		cout<<"Faktorial tidak di definisikan untuk bilangan negativ! ";
	}
	
	else {
		cout<<"Kesalahan input! hanya dapat menginput angka";
	}

    return 0; 
}
