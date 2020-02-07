#include <iostream>

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
    char lastLet[2] = {'a','e'};
	cout << "Iveskite savo varda: "; cin >> name;

    struct box{
        string pirmEil;
        string antrEil;
        string trecEil;
    };

    box greet;


    if(strCompare(name, lastLet[0])==1 || strCompare(name,lastLet[1])==1)
    {
        hi = "Sveika, ";
    }
    else{
        hi = "Sveikas, ";
    }


	int starNum = hi.size() + name.size();

	for(int i=0; i < starNum + 5; i++){ // pirma eilute
		greet.pirmEil += "*";
	}

	greet.antrEil += "*"; // antra eilute
	for(int i=1; i<starNum + 4; i++){
		greet.antrEil += " ";
		if(i==starNum + 3){
			greet.antrEil += "*";
		}
	}

	greet.trecEil = "* " + hi + name + "!" + " *"; // trecia eilute

	cout << greet.pirmEil << endl << greet.antrEil << endl << greet.trecEil << endl <<  greet.antrEil  << endl << greet.pirmEil << endl;
	

}