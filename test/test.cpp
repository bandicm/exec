#include <iostream>

#include "../lib/exec.hpp"

using namespace std;

int main() {

    string out = exec("ls -lha");

    cout << out << endl;
    

    return 0;
}