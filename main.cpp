#include <iostream>

using namespace std;

int main(){
	string hi = "Sveikas, ";
	string name;
	cout << "Iveskite savo varda: "; cin >> name;

	int starNum = hi.size() + name.size();

	char pirmEil[starNum], antrEil[starNum+5], trecEil[6+starNum], ketEil[starNum+5], penkEil[starNum];

	for(int i=0; i < starNum + 6; i++){ // pirma eilute
		pirmEil[i] = '*';
	}

	antrEil[0] = '*'; // antra eilute
	for(int i=1; i<starNum + 4; i++){
		antrEil[i] = ' ';
		if(i>starNum + 3){
			antrEil[i] = '*';
		}
	}

	//trecEil = "* " + hi + name + " !" + " *"; // trecia eilute
	

	cout << pirmEil << endl << antrEil << endl << trecEil << endl;
}