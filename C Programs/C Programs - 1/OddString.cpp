#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    string answer;
    for(unsigned int i = 0; i < input.size(); i+= 2)
        answer += input[i];

    cout << answer;
    return 0;
}
