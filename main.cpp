#include <iostream>

using namespace std;

struct box{
        string pirmEil;
        string antrEil;
        string trecEil;
    };

int strCompare(string a, char b){
    auto it = a.end();
    if(*(it-1) == b){
        return 1;
    }
    else{
        return 0;
    }    
}

void printRow(int n, box one){
    for(int i=0; i<n; i++){
        cout << one.antrEil<< endl;
    }
}

int main(){
	string name;
    string hi;
    char lastLet[2] = {'a','e'};
    int remAukstis = 0;
	cout << "Iveskite savo varda: "; cin >> name;
    cout << "Iveskite remelio auksti (nelyginis skaicius): "; cin >> remAukstis; cout << endl;
    

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

    int rowNumb = remAukstis - 3;

	cout << greet.pirmEil << endl;
    
    printRow(rowNumb/2, greet);

    cout << greet.trecEil << endl;

    printRow(rowNumb/2, greet);
    
    cout << greet.pirmEil << endl;
    
	

}