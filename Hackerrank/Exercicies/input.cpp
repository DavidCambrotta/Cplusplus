/*Task
Read  numbers from stdin and print their sum to stdout.

Input Format

One line that contains  space-separated integers: , , and .

Constraints

Output Format

Print the sum of the three numbers on a single line.

Sample Input

1 2 7
Sample Output

10
Explanation

The sum of the three numbers is .*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int x,y,z,sum;

int main() {
    printf("Input 3 numbers:");
    cin >> x >> y >> z;
    sum = x + y + z;
    cout << sum << endl;
    return 0;
}