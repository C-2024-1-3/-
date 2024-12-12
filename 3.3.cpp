

#include <iostream> 
#include "mytemperature.h"

using namespace std;
int main()
{
    double x; double y=120.00 ;
    cout << "Celsius " << '\t' << "Fahrenheit" << '\t' << '|' << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
    for (x = 40.00; x > 30; x--) {
        if (y >= 30) {
            cout << double(x) <<'\t' <<'\t'<< (double)celsius_to_fah(x) << '\t' <<'\t' << '|' << '\t' << double(y) << '\t' << '\t' << (double)fahrenheit_to_cels(y) << endl; y -= 10;
          }
     }
    
    
    


}


    