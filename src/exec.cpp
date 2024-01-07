#include "../lib/exec.hpp"

string marcelb::exec(const string& command) {
    FILE *fds;
    char cstr[200];
    fds = popen(command.c_str(), "r");
    if (fds == NULL) {
        throw string("[ERROR] Cant pipe stream in execute command ");
    }

    string cppstr;
    while (fgets(cstr, sizeof(cstr), fds) != NULL) {
        cppstr += cstr;
    }
    pclose(fds);
    return cppstr;
}
