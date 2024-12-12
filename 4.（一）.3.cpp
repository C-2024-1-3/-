

#include <iostream>
using namespace std;
int main()
{
    /**************打开所有柜子***********/
    bool box[100];
    for (int i = 0; i <= 99;i++) {
        box[i] = true;

    }


    int boxnum;
    /*** 执行一百天   ***/
    int studentnum=2;
    for (boxnum = studentnum - 1; studentnum <= 100;) {
        for (; boxnum <= 99;) {
            if (box[boxnum] == true) {
                box[boxnum] =false;
            }
            else {
                box[boxnum] = true;
            }
            boxnum = boxnum + studentnum;

        }
        studentnum++;
        boxnum = studentnum - 1;


    }
    /*输出*/
    int i = 0;
    for (; i <= 99; i++) {
        if (box[i] == true) {
            cout << i+1 << '\t';
        }
        
    }
    
    system("pause");
    return 0;

}

