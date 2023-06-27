#include <iostream>

#include "../lib/exec.hpp"

using namespace std;

int main() {

    string out = exec("bash bash_cmd.sh");

    cout << out << endl;
    

    return 0;
}