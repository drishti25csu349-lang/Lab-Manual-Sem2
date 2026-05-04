#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>

using namespace std;

int main() {
    string input;
    cout << "Enter the text to process: ";
    getline(cin, input);

    int digitCount = 0;
    int specialCharCount = 0;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (isdigit(ch)) {
            digitCount++;
        } else if (!isalpha(ch) && !isspace(ch)) {
            specialCharCount++;
        }
    }

    stringstream ss(input);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    int wordCount = words.size();

    string normalizedStr = "";
    for (int i = 0; i < words.size(); i++) {
        normalizedStr += words[i];
        if (i < words.size() - 1) {
            normalizedStr += " ";
        }
    }

    if (normalizedStr.length() > 0) {
        normalizedStr[0] = toupper(normalizedStr[0]);
        for (int i = 1; i < normalizedStr.length(); i++) {
            normalizedStr[i] = tolower(normalizedStr[i]);
        }
    }

    bool isValid = true;
    for (int i = 0; i < normalizedStr.length(); i++) {
        char ch = normalizedStr[i];
        if (!isalpha(ch) && !isdigit(ch) && !isspace(ch)) {
            isValid = false;
            break;
        }
    }

    cout << "\nNormalized String: " << normalizedStr << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Digits: " << digitCount << endl;
    cout << "Total Special Characters: " << specialCharCount << endl;

    if (isValid) {
        cout << "Validation Result: SUCCESS" << endl;
    } else {
        cout << "Validation Result: FAILED" << endl;
    }

    return 0;
}
