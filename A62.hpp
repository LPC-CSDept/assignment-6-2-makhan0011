/*//
#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
        // return n_th power number
}
double nthpowern(int n)
{
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
*/

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
    double result = 1;
        for(int i = 0; i < n; i++) {
                result = result * 2
        }
        return result;
}
double nthpowern(int n)
{
    double result = 1;
        for(int i = 0; i > n; i--) {
                result = result/2;
        }
        return result;
void printout(double result)
{
    cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
