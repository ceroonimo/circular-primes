#include <iostream>
using namespace std;

bool asalmi(int n)   // asallık kontrolü
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long toplami = 0;

    // 2 milyondan küçük asal sayıların toplamı

    for (int i = 2; i < 2000000; i++) {
        if (asalmi(i)) {
            toplami += i;
        }
    }

    cout << "2 milyon'dan kucuk asal sayilarin toplami: " << toplami << endl;
    return 0;
}
