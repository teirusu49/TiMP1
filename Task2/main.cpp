// main.cpp
#include "modAlphaCipher.h"

bool isValid(const string& s)
{
    for(const auto& c : s) // цикл проходит по всему массиву и выдает сам объект этого массива
	if(!isalpha(c))
	    return false;
    return true;
}

int main(int argc, char** argv)
{
    int key;
    string st;
    unsigned operation;
    cout << "ENTER KEY (NUMBER) : ";
    cin >> key;
    if(!cin.good()) {
	clog << "KEY NOT VALID\n";
	return 1;
    }
    cout << "KEY ACCEPTED\n";
    modAlphaCipher cipher(key);
    do {
	cout << "SELECT OPERATION\n0-exit\n1-encrypt\n2-decrypt\n> ";
	cin >> operation;
	if(operation > 2) {
	    cout << "UNSUPPORTED OPERATION\n";
	} else if(operation > 0) {
	    cout << "ENTER TEXT IN LATIN : ";
	    cin >> st;
	    if(isValid(st)) {
		if(operation == 1) {
		    cout << "ENCRYPTED TEXT: " << cipher.coder(st) << endl;
		} else {
		    cout << "DECRYPTED TEXT: " << cipher.decoder(st) << endl;
		}
	    } else {
		cout << "INCORRECT TEXT.\n";
	    }
	}
    } while(operation != 0);

    return 0;
}
