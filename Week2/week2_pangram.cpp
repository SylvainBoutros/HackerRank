#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<int> results(26, 0);

    for (int i = 0; i < s.length(); i++) {
        if (isspace(s[i])) {
            continue;
        }
        s[i] = toupper(s[i]);
        int idx = s[i] - 'A';
        results[idx]++;
    }

    if (count(results.begin(), results.end(), 0)) {
        return "not pangram";
    } else {
        return "pangram";
    }

    return "";
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
