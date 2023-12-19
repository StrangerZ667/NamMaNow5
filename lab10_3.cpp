#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;

int main (){
    double x,i=0,sum=0,stdnum=0,sd=0;
	ifstream source;
    string wow;
	source.open("score.txt");
    while(getline(source, wow)) {
        x = atof(wow.c_str());
        sum+=x;
        sd+=pow(x,2);
        i++;
    }
    sum=sum/i;
    stdnum = sqrt((sd/i)-(pow(sum,2)));
    source.close();
    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum << endl;
    cout << "Standard deviation = "<< stdnum << endl;
	return 0;
}
