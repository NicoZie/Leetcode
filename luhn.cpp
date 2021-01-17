#include <iostream>
using namespace std;
#include "luhn.h"

int calc_number(vector <int> number){
    int sumN = 0;
    int modulA = number.size() % 2;
    //cout<< modulA <<endl;
    //for(auto it = number.rbegin(); it != number.rend(); ++it) {
    for(vector<int>::size_type i = number.size()-1; i != (vector<int>::size_type) -1; i--) {
        //cout<< number[i] <<endl;
        if (i % 2 != modulA) {
            sumN += number[i];
        }
        else{
            if (number[i]*2 > 9) {
                sumN += (number[i] *2)-9;
            }
            else{
                sumN += (number[i] *2);
            }
        }
    }
    return sumN;
}

int main() {
    vector<int> testNumber = {1, 8, 9, 3, 7};
    cout<< calc_number(testNumber) << endl;
    return 0;
}
