#include <iostream>
using namespace std;

int main() {
    int a;
    long long faktorial = 1; 

    cout << "Masukkan angka : ";
    cin >> a;


	if (a<0){
		cout<<"Faktorial tidak di definisikan untuk bilangan negativ! ";
	}
	
    for (int i = 1; i <= a; i++) {
        faktorial *= i; 
    }

    cout << "Faktorial dari " << a << " adalah = " << faktorial << endl;
    cout << "Alamat memori dari \""<<faktorial<<"\" adalah = "<< &faktorial << endl ;
    

    return 0; 
}
