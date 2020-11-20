//
//  main.cpp
//  Zadanie 2 WiO pdf
//
//  Created by Wojciech Szyjka on 13/11/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

float a ;
float b ;

int main(int argc, const char * argv[]) {
   
    cout << "Podaj liczbę a " ;
    cin >> a ;
    cout << endl ;
    cout << "Podaj liczbę b " ;
    cin >> b ;
    cout << endl ;
    
    if ( (a >= 10 && a < 100 ) || (b >=10 && b < 100) )
        cout <<  "a lub b 2 cyfrowa : true"<< endl ;
    
    else
        cout << "a lub b 2 cyfrowa : false" << endl ;
    
    return 0 ;
        
}
