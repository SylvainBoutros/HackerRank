#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void separateNumbers(string s) {
    if (s.length() == 1 || s[0] == '0') {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < s.length() / 2 + 1; i++) {
        long num = stol(s.substr(0, i));
        string tmp = "";

        while (tmp.length() < s.length()) {
            tmp += to_string(num++);
        }

        if (tmp == s) {
            cout << "YES " << stol(s.substr(0, i)) << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

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
