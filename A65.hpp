//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int n1, int n2, int n3);
void swaptwo(int n, int s);

void swaptwo(int n, int s){
    int temp;
    temp = n;
    n = s;
    s = temp;
}
void swap(int n1, int n2, int n3){
    swaptwo(n1, n2);
    swaptwo(n1, n3);
}
// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
