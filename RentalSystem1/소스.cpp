#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip> 
using namespace std;
class customer {
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data = 0;
};
class rent : public customer {
public:
    int days = 0, rentalfee = 0;
    void data() {
        cout << "\t\t\t\tPlease Enter your Name: ";
        cin >> customername;
        cout << endl;
        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla 20011." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford 2017." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            if (carmodel == "A") {
                system("CLS");

                cout << "You have choosed Tesla model 2011" << endl;
                ifstream inA("A.txt");
                char str[200];
                while (inA) {
                    inA.getline(str, 200);
                    if (inA) cout << str << endl;
                }
            }
            if (carmodel == "B") {
                system("CLS");

                cout << "You have choosed Hyundai model 2015" << endl;
                ifstream inB("B.txt");
                char str[200];
                while (inB) {
                    inB.getline(str, 200);
                    if (inB) cout << str << endl;
                }
            }
            if (carmodel == "C") {
                system("CLS");
                cout << "You have choosed Ford model 2017" << endl;
                ifstream inC("C.txt");
                char str[200];
                while (inC) {
                    inC.getline(str, 200);
                    if (inC) cout << str << endl;
                }
            }
            if (carmodel != "A" && carmodel != "B" && carmodel != "C")

                cout << "Invaild Car Model. Please try again!" << endl;
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C");
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide following information: " << endl;
        cout << "Please select a Car No. : ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }
    void calculate() {
        system("CLS");
        cout << "Calculating rent. Please wait......" << endl;

        if (carmodel == "A" || carmodel == "a")
            rentalfee = days * 56;
        if (carmodel == "B" || carmodel == "b")
            rentalfee = days * 60;
        if (carmodel == "C" || carmodel == "c")
            rentalfee = days * 75;
    }
    void showrent() {
        cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t	| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "\t\t	| Car Model :" << "--------------------|" << setw(10) << carmodel << " |" << endl;
        cout << "\t\t	| Car No. :" << "----------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "\t\t	| Number of days :" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "\t\t	| Your Rental Amount is :" << "--------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t	| Caution Money :" << "----------------|" << setw(10) << "0" << " |" << endl;
        cout << "\t\t	| Advanced :" << "---------------------|" << setw(10) << "0" << " |" << endl;
        cout << "\t\t	 ________________________________________________________" << endl;
        cout << "\n";
        cout << "\t\t	| Total Rental Amount is :" << "-------|" << setw(10) << rentalfee << " |" << endl;
        cout << " " << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t	You are advised to pay up the amount before due date." << endl;
        cout << "\t\t	Otherwise penelty fee will be applied" << endl;
        cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
        int f;
        system("PAUSE");

        system("CLS");
    }
};
int main(){
rent obj1; 
obj1.data();
obj1.calculate();
obj1.showrent();

return 0;
}