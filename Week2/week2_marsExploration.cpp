#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int counter = 0;

    for (int i = 0; i <= s.length()-3; i+=3) {
        if (s[i] != 'S' || s[i+1] != 'O' || s[i+2] != 'S') {
            counter += s[i] != 'S';
            counter += s[i+1] != 'O';
            counter += s[i+2] != 'S';
        }
    }

    return counter;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
