
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; ++i) {
        char c = hexString[i];
        int digit;
        if (isdigit(c)) {
            digit = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            digit = 10 + (c - 'a');
        }
        else if (c >= 'A' && c <= 'F') {
            digit = 10 + (c - 'A');
        }
        else {
           
            cout << "非法的十六进制字符" << endl;
            return -1;
        }
        result = result * 16 + digit;
    }
    return result;
}

int main() {
    
    int decimal = parseHex("A5");
    cout << decimal << endl;
    return 0;
}
