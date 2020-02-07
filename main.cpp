#include <iostream>

using namespace std;

int main(){
	string hi = "Sveikas, ";
	string name;
	cout << "Iveskite savo varda: "; cin >> name;

	int starNum = hi.size() + name.size();

	string pirmEil, antrEil, ketEil, penkEil;
	string trecEil;


	for(int i=0; i < starNum + 5; i++){ // pirma eilute
		pirmEil += "*";
	}

	antrEil += "*"; // antra eilute
	for(int i=1; i<starNum + 4; i++){
		antrEil += " ";
		if(i==starNum + 3){
			antrEil += "*";
		}
	}

	trecEil = "* " + hi + name + "!" + " *"; // trecia eilute
	
	ketEil += "*"; // ketvirta eilute
	for(int i=1; i<starNum + 4; i++){
		ketEil += " ";
		if(i==starNum + 3){
			ketEil += "*";
		}
	}

	for(int i=0; i < starNum + 5; i++){ // penkta eilute
		penkEil += "*";
	}


	cout << pirmEil << endl << antrEil << endl << trecEil << endl <<  ketEil << endl << penkEil << endl;
	

}