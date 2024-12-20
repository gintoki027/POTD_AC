#include <iostream>
#include <string>
#include <cmath> 

using namespace std;
int scoreOfString(string s) {
    int result = 0;
    for(int i = 0; i < s.length() - 1; i++) {
        result += abs(s[i] - s[i+1]);
    }
    return result;
} 


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = scoreOfString(s);
    cout << "Score of the string: " << result << endl;

    return 0;
}
