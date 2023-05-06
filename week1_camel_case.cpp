#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string split_method(string line) {
    string result;
    char first_char = line[0];
    line.erase(0, 2);

    for (int i = 0; i < line.size(); i++) {
        if (isupper(line[i]) && i != 0) {
            result += " ";
            line[i] = tolower(line[i]);
        }
        result += line[i];
    }

    if (first_char == 'M') {
        result.erase(result.find("()"));
    } else if (first_char == 'C') {
        result[0] = tolower(result[0]);
    }

    return result;
}

string combine_method(string line) {
    string result;
    char first_char = line[0];
    line.erase(0, 2);

    for (int i = 1; i < line.size(); i++) {
        if (isspace(line[i - 1])) {
            line[i] = toupper(line[i]);
        }
    }
    line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
    result = line;

    if (first_char == 'M') {
        result += "()";
    } else if (first_char == 'C') {
        result[0] = toupper(result[0]);
    }

    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (string line; getline(cin, line);) {
        string results = "";
        if (line[0] == 'S') {
            /* Call split method */
            line.erase(0, 2);
            results = split_method(line);
        } else {
            /* Call combine method */
            line.erase(0, 2);
            results = combine_method(line);
        }
        cout << results << endl;
    }

    return 0;
}
