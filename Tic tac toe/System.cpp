#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> numbers[9] = {1,2,3,4,5,6,7,8,9};

void display_playground (){

 cout << "     |     |     " << endl;
    cout << "  " << numbers[1] << "  |  " << numbers[2] << "  |  " << numbers[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << numbers[4] << "  |  " << numbers[5] << "  |  " << numbers[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << numbers[7] << "  |  " << numbers[8] << "  |  " << numbers[9] << endl;

    cout << "     |     |     " << endl << endl;
 



}



















int main (){


display_playground();





}