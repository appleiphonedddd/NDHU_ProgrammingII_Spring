#include <iostream>

using namespace std;

int main()
{
    bool found = false;
    char text[4];
    cin >> text;

    for(auto ch : text) {
        if(ch == '\0') {
            cout << "Empty string";
        }
    }

    for(int i = 0; i < 4; i++) {
        if (text[i] == '4') {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Yes" << "\n";
    }
    
    else {
        cout << "No" << "\n";
    }

    return 0;
}