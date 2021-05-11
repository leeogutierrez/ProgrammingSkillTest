
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    char var[1000];
    int i;
  
    cout << "Enter the word you want to calculate the number of strings: ";
    scanf("%s", var);
  
    for (i = 0; var[i] != '\0'; ++i);
  
    cout << "Length of the string is: " << i << endl;

    system("PAUSE");
    return 0;
}