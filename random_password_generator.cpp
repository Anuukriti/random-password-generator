    
#include <bits/stdc++.h>
using namespace std;

int main() {
    string UPPERCASE_CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string LOWERCASE_CHARS = "abcdefghijklmnopqrstuvwxyz";
    string NUMBER_CHARS = "0123456789";
    string SYMBOL_CHARS = "!@#$%^&*()_+-=[]{}|;':\"<>,.?/~`";

    int plen;
    bool includeUppercase, includeLowercase, includeNumbers, includeSymbols;
    string allChars = "";
    string password = "";

    // get password length and character inclusion options from user
    cout << "Enter password length: "<< endl;
    cin >> plen;
    cout << "Include uppercase characters? (1 = yes, 0 = no) "<< endl;
    cin >> includeUppercase;
    cout << "Include lowercase characters? (1 = yes, 0 = no) "<< endl;
    cin >> includeLowercase;
    cout << "Include numbers? (1 = yes, 0 = no) "<< endl;
    cin >> includeNumbers;
    cout << "Include symbols? (1 = yes, 0 = no) "<< endl;
    cin >> includeSymbols;

    // build string of all characters to include in password
    if (includeUppercase){
        allChars = allChars + UPPERCASE_CHARS;
    } 
    if (includeLowercase){
        allChars = allChars + LOWERCASE_CHARS;
    } 
    if (includeNumbers){
        allChars = allChars + NUMBER_CHARS;
    }   
    if (includeSymbols){
        allChars = allChars + SYMBOL_CHARS;
    } 
    //  random number generator
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> num(0, allChars.size() - 1);

    // generate random password
    for (int i = 0; i < plen; i++) {
        password = password + allChars[num(rng)];
    }

    // print generated password
    cout << "Generated password: " << password << endl;

    return 0;
    }
