#include <iostream>
#include <string>
using namespace std;

int main () {
    
    char name [50];
    char pcourse [50];
    int yrlevel=0;
    float unit;
    string yrname;
    int rateunit=0;
    int tuition=0;
    int dpayment=0;
    int bal=0;
    float downrate=.3;

    cout << "Student Name: ";
    cin.getline(name,50);
    cout << "Program/Course ";
    cin.getline(pcourse,50);
    cout << "Year Level: ";
    cin >> yrlevel;
    cout << "No. of Units: ";
    cin >> unit;

    if(yrlevel==1) {
        yrname ="Freshman";
        rateunit=1500;
    } else if (yrlevel==2) {
        yrname ="Sophomore";
        rateunit=1800;
    } else if (yrlevel==3) {
        yrname ="Junior";
        rateunit=2000;
    } else if (yrlevel==4) {
        yrname ="Senior";
        rateunit=2300;
    } else if (yrlevel==5) {
        yrname ="Senior";
        rateunit=2300;
    }

cout << "       ENROLLMENT SLIP" <<endl;
cout << "Student Name:        " << name << endl;
cout << "Program/Course:      " << pcourse << endl;
cout << "Year Name:           " << yrname << endl;
cout << "No. of Units:        " << unit << endl;
tuition=rateunit * unit;
cout << "Tuition fee:         " << tuition << endl;
dpayment=tuition * downrate;
cout << "Down Payment:        " << dpayment << endl;
bal=tuition-dpayment;
cout << "Balance:             " << bal << endl;

system("pause");
}