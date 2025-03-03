#include <iostream>
#include <fstream>

void Divide(int, int, bool&, float&);
void Print(int, int, bool, float);

int main()
{
    using namespace std;
    
    bool error ;
    float result ;
    int divident = 8;

    int divisor = 0;
    Divide(divident, divisor, error, result);
    cout << "Test 1: " << endl;
    Print(divident, divisor, error, result);

    divisor = 2;
    Divide(divident, divisor, error, result);
    cout << "Test 2: " << endl;
    Print(divident, divisor, error, result);

    return 0;
}

void Divide(int divident, int divisor, bool& error, float& result) {
    if (divisor == 0) {
        error = true;
    }
    else {
        error = false;
        result = float(divident) / float(divisor);
    }
    /*return 0;*/
}

void Print(int divident, int divisor, bool error, float result) {
    using namespace std;
    cout << "divident: " << divident << " divisor: " << divisor << " error : " << error << " result: " << result<<endl;
}