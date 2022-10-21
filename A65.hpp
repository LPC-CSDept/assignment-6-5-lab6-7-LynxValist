//

#include <iomanip>
#include <iostream>
using namespace std;

void	swap(int &, int &, int &);
void	swaptwo(int &, int &);

void	swap(int &num1, int &num2, int &num3)
{
	swaptwo(num1, num2);
	swaptwo(num1, num3);
}
void	swaptwo(int &i, int &j)
{
	int 	tmp;
	tmp = i;
	i = j;
	j = tmp;
}

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
