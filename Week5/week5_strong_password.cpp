#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    bool hasSpecialChar = false;
    bool hasLowerCase = false;
    bool hasUpperCase = false;
    bool hasDigit = false;

    string specialChars = "!@#$%^&*()-+";
    string lowerChars = "abcdefghijklmnopqrstuvwxyz";
    string upperChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string digits = "0123456789";

    for (char c : password) {
        if (specialChars.find(c) != string::npos) {
            hasSpecialChar = true;
        } else if (lowerChars.find(c) != string::npos) {
            hasLowerCase = true;
        } else if (upperChars.find(c) != string::npos) {
            hasUpperCase = true;
        } else if (digits.find(c) != string::npos) {
            hasDigit = true;
        }
    }

    int missingTypes = 0;
    if (!hasSpecialChar) {
        missingTypes++;
    }
    if (!hasLowerCase) {
        missingTypes++;
    }
    if (!hasUpperCase) {
        missingTypes++;
    }
    if (!hasDigit) {
        missingTypes++;
    }

    int minLength = max(6 - n, 0);
    return max(missingTypes, minLength);
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
