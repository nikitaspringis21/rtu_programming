#include <iostream>
#include <cmath>
using namespace std;

float average(int a, int b, int c){
    float avg = (a + b + c) / 3.;
    return avg;
}

int negativeCount(int a, int b, int c){
    int count = 0;
    int array[3] = {a, b, c};
    for (int i = 0; i <= 2; i++){
        if (array[i] < 0) count++;
    }
    return count;
}

int max(int a, int b, int c){
    int maxNum = a;
    if (maxNum < b) maxNum = b;
    if (maxNum < c) maxNum = c;

    return maxNum;
}

int main(){
    int a, b, c;
    cout << "Input first number: " << "\n"; cin >> a;
    cout << "Input second number: " << "\n"; cin >> b;
    cout << "Input third number: " << "\n"; cin >> c;

    bool trianglePossible = (a + b) > c && (a + c) > b && (b + c) > a;
    cout << "Average: " << average(a, b, c) << "\n";
    cout << "Negative amount: " << negativeCount(a, b, c) << "\n"; 
    cout << "Max: " << max(a, b, c) << "\n";
    cout << "Possible to create triangle: " << trianglePossible << "\n";
}

