#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour1 = s[1] - '0';
    int hour2 = s[0] - '0';
    int hours = hour2 * 10 + hour1 % 10;

    if (s[8] == 'A') {
        if (hours == 12) {
            return "00" + s.substr(2, 6);
        } else {
            return s.substr(0, 8);
        }
    } else {
        if (hours == 12) {
            return "12" + s.substr(2, 6);
        } else {
            hours += 12;
            stringstream ss;
            ss << hours;
            return ss.str() + s.substr(2, 6);
        }
    }
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
