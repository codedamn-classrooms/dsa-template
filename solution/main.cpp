// Solution Template

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


void solve(vector<string> multilineInput) {
    cout << "The solution is 1" << endl;
}


vector<string> split_string_by_newline(const string& str)
{
    auto result = vector<string>{};
    auto ss = stringstream{str};
    for (string line; getline(ss, line, '\n');)
        result.push_back(line);
    return result;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        cout << "command line args missing" << endl;
        return 0;
    }
    vector<string> multilineInput = split_string_by_newline(argv[1]);
    solve(multilineInput);
    return 0;
}
