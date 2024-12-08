#include <iostream>

using namespace std ;

class Calculator {
public:
    int floor(double number) {
        return (int)number ;
    }

    int add(int i, int j) {
        return i + j;
    }

    double max1(double a, double b) {
        if (a>b){
            return a ;
        }
        return b ;
    }

    bool find1(string str, char ch) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ch) {
                return true; 
            }
        }
        return false; 
    }

	int max2(int arr[], int size) {
    	int max = arr[0];
    	for (int i = 1; i < size; i++) {
        	if (arr[i] > max) {
            	max = arr[i];
        	}
    	}
    return max;
	}
};

int main() {
	Calculator calc ;
	cout << calc.floor ( 3.1 ) << endl;
	cout << calc.add (3 , 5) << endl;
	cout << calc.max1 (13.8 , 12.68) << endl;
	char ch = 'l' ;
	cout << calc.find1 ("Hello Ali", ch )  << endl;
	int arr[] = {11, 21, 9, 4, 5} ;
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << calc.max2(arr, size) << endl ;
}