#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>
using namespace std;

void countCharacterFrequencies(const string& text) {
    unordered_map<char, int> frequencyMap;

    for (char ch : text) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            frequencyMap[ch]++;
        }
    }
    cout << "Character frequencies:" << endl;
    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string paragraph;
    cout << "Enter a paragraph (end with a newline and Ctrl+D):" << endl;
    string line;
    while (getline(cin, line)) {
        paragraph += line + " ";
    }
    countCharacterFrequencies(paragraph);

    return 0;
}

