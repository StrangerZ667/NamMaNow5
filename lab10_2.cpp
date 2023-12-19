#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
    string textline;
	cout << "-------------------- BOOM ---------------------\n";
    while(getline(source, textline)) {
        cout << textline << endl;
    }
	cout << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}
