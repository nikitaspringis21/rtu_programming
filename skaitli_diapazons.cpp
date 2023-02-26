#include <iostream>
using namespace std;

void simple(int a, int b){
    int c = 0;
    int sum = 0;
    float average;

    for (int i = a; i <= b; i++){
        sum += i;
        c++;
        cout << i << "\t";
        if (c % 8 == 0) cout << "\n";
    }
    average = (float)sum / c;
    cout << "\nAverage: " << average;
}

void ultimate(int a, int b){
    int c = 0;
    int sum = 0;
    float average;

    for (int i = a; i <= b; i++){
        bool divides = i % 3 == 0 || i % 5 == 0;
        if (divides) {
            sum += i;
            c++;
            cout << i << "\t";
            if (c % 8 == 0) cout << "\n";
        }
    }
    average = (float)sum / c;
    cout << "\nAverage: " << average;
}


int main(){
    int a, b;
    
    cout << "Input a: "; cin >> a;
    cout << "Input b: "; cin >> b;
    cout << "\n";
    simple(a, b);
    cout << "\n";
    ultimate(a, b);
    
    return 0;
}


