// Lab Template

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void solve(vector<string> multilineInput)
{
    cout << "Solve me!" << endl;
}

vector<string> split_string_by_space(const string &str)
{
    auto result = vector<string>();
    auto ss = stringstream(str);
    for (string line; getline(ss, line, ' ');)
        result.push_back(line);
    return result;
}

int main(int argc, char **argv)
{
    string input;
    cin >> input;
    vector<string> multilineInput = split_string_by_space(input);
    solve(multilineInput);
    return 0;
}
