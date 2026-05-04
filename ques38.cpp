#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    getline(cin, username);

    bool isValid = true;

 
    if (username.length() == 0) {
        isValid = false;
    }

    for (int i = 0; i < username.length(); i++) {
        char ch = username[i];
   
        if (!isalnum(ch)) {
            isValid = false;
            break;
        }
    }

    if (isValid) {
        cout << "Username accepted!" << endl;
    } else {
        cout << "Username rejected. Spaces and special characters are not allowed." << endl;
    }

    return 0;
}
