#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;


string ConcatRemove(string s, string t, int k) {
   int totalLength = s.length() + t.length();
    if (totalLength <= k) {
        return "Yes";
    }
    
    int commonLength = 0;
    for (int i = 0; i <  Math.min(s.length(), t.length()); i++) {
        if (s.charAt(i) != t.charAt(i)) {
            break;
        }
        commonLength++;
    }  
    int minOperationCount = totalLength - 2 * commonLength;

    if(minOperationCount <= k && ((k - minOperationCount) % 2 == 0)) {
        return "Yes";
    } 

    return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = ConcatRemove(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

