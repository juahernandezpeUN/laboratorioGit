#include<iostream>
#include <fstream>
#include <>

using namespace std;

int main(){
	ifstream input("./input/input.txt")
	
	if(input.is_open()){
		cout << "Archivo Abierto :)" << endl;
		string linea;
		
		while(getline(input, linea)){
			cout << linea;
		}
	}
	
	input.close();
	return 0;
}
