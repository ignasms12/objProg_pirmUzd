#include <iostream>
#include <cstring>

using namespace std;

int strCompare(string a, char b){
    auto it = a.end();
    if(*(it-1) == b){
        return 1;
    }
    else{
        return 0;
    }    
}

int main(){
	string name;
    string hi;
    char lastLet = 's';
	cout << "Iveskite savo varda: "; cin >> name;


    if(strCompare(name, lastLet)==1){
    hi = "Sveikas, ";
    }
    else{
    hi = "Sveika, ";
    }


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