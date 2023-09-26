#include "Weapon.hpp"
#include <iostream>

using namespace std;

int main (void){
    Weapon fall("fall");
   
    cout <<  fall.getType() << endl;
   

    fall.setType("fall 2");
    cout <<  fall.getType() << endl;

}