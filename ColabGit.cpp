#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
	ifstream input("./input/input.txt");
	ofstream output("./output/output.txt");
	if(input.is_open()&&output.is_open()){
		cout << "Archivo Abierto :)" << endl;
		string linea;
		
		while(getline(input, linea)){
			output << linea;
		}
		cout << "archivo esctito correctamente" << endl;
	}
	output.close();
	input.close();
	return 0;
}
