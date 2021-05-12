#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>
#include <vector>

using namespace std;

string StringExplode(string str, string separator, vector<string>* results){
    int found;
    found = str.find_first_of(separator);
    while(found != string::npos){
        if(found > 0){
            results->push_back(str.substr(0,found));
        }
        str = str.substr(found+1);
        found = str.find_first_of(separator);
    }
    if(str.length() > 0){
        results->push_back(str);
    }
}

string ConcatRemove(string s, string t, int k) {
    vector<string> sVec;
    vector<string> tVec;

    string sArr = StringExplode(s, " ", &sVec);
    string tArr = StringExplode(t, " ", &tVec);
    int count = 0;
    for (int i = 0; i == count && i < s.length(); i++) {
        if (sArr[i] == tArr[i]) {
            count++;
        }
    }

    int tMinusCount = t.length() - count;
    int sMinusCount = s.length() - count;

    int STK = k - (tMinusCount + sMinusCount);

    if (tMinusCount + sMinusCount < k && t.length() + s.length() > k && STK % 2 != 0) {
        return "No";
    } else if (tMinusCount + sMinusCount <= k) {
        return "Yes";
    } else {
        return "No";
    }
}

int main()
{
    string s;
    string t;
    int k;

    cout << "Type the value of string S: ";
    cin >> s;
    
    cout << "Type the value of string T: ";
    cin >> t;

    cout << "Type the value of operations (K): ";
    cin >> k;

    string result = ConcatRemove(s, t, k);

    cout << "Result: " << result << "\n";

    system("PAUSE");
    return 0;
}

