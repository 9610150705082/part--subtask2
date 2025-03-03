#include <iostream>
using namespace std;

int main(){
int temp1, temp2, temp3;

cout<< "Enter the first temperature reading: ";
cin >> temp1;

cout<< "Enter the second temperature reading: ";
cin >> temp2;

if (temp2 > temp1 + 50){
	cout << "Reduce fryer heat before taking the third reading" << endl;
}else if (temp2 < temp1 + 10){
	cout << "Inrease fryer heat before taking the third reading" << endl;
}

cout << "Enter the third temperature reading:";
cin >> temp3;

if (temp3 >= 150 && temp3 <= 190){
	cout << "You may start frying the Magwinyas" << endl;
}else{
	cout << "Oil is not ready for frying!" << endl;
}

return  0;

}
