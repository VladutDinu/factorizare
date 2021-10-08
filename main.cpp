#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    long n=9753295238;
    time_t now;
    time_t end_t;
    double seconds;

    //cin >> n;

    const clock_t begin_time = clock();
    int i = 2;
    int p = 1;

    while(n!=1){
        while(n%i==0){
            n /= i;
            p *= i;
            cout << i << endl;
        }
        i += 1;
    }

    cout << float( clock () - begin_time ) /  CLOCKS_PER_SEC;
    return 0;
}
