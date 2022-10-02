#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int random_number(){

srand(time(0));

return (rand() % 6);


}
int main (){

    int suit_case = 1;


    for (int i = 1; i > 0; i++){

        
        cout << i << endl;

        if ( random_number() == suit_case){

            break;
        } 
    }    
        

    return 0;
}