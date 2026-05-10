#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
	ifstream input("./input/input.txt");
	ofstream output("./output/output.txt");
	ofstream output_mayus("./output/mayusculas.txt");
	if(input.is_open()&&output.is_open()){
		cout << "Archivo Abierto :)" << endl;
		string linea;
		string mayus;
		while(getline(input, linea)){
			output << linea;
				
		for(int i = 0; i<linea.length()+1;i++){
			mayus=toupper(linea[i]);
			linea[i]=tolower(linea[i]);
			output_mayus<<mayus;
}
		}
		
		

		cout << "archivo esctito correctamente" << endl;
	}
	output.close();
	input.close();
	output_mayus.close();
	return 0;
}
