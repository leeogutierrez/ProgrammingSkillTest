
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	for(int i=1 ; i<=100 ; i++){
		if (i % 3 ==0 and i % 5 ==0){
            cout << "FooBaa"<< endl;
        }
        else if(i % 5 ==0){
			cout << "Baa" << endl;
		}
        else if(i % 3 ==0){
			cout << "Foo" << endl;
		}
        else{
            cout << i << endl;
        }
	}
	system("PAUSE");
	return 0;
}