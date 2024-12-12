
#include <iostream>
using namespace std;
int  num(int n) {
    if (n == 10) { return 1; }
    else{
        return 2 * (num(n + 1) + 1);
    }
    
    

}



int main()
{
    cout << num(1) << endl;
}

