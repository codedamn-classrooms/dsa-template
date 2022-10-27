// solution
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string str, char del)
{

    string temp = "";
    vector<string> result;

    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] != del)
        {
            temp += str[i];
        }
        else
        {
            result.push_back(temp);
            temp = "";
        }
    }

    result.push_back(temp);

    return result;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "command line args missing" << endl;
        return 0;
    }

    string multilineInput = argv[1];
    vector<string> inputValues = split(multilineInput, '\n');
    cout << inputValues.size() << endl;
    cout << "solution template" << endl;

    return 0;
}