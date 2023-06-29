#include <bits\stdc++.h>
using namespace std;

int ContarPalabras(string frase){
	int cont=1;
	
	for(int i=0; i<frase.size(); i++){
		if(frase[i] == ' '){
		    cont ++;
	    }
	}
	return cont;
}
int main(){
	string Palabras;
	
	cout<<"ingrese palabras : ";
	getline(cin,Palabras);
	
	int Cont = ContarPalabras(Palabras);
	
	cout<<"hay "<<Cont<<" palabra/s"<<endl;
	
	return 0;
}

