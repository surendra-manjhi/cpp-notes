#include <iostream>

contains predefined methods & keywords developed by devs. It helps devs to write program easily without hardcoded it from scratch.

using namespace std;

That line of code automatically detect header files methods & keywords and add itself with them (who is applicable). It is not visible to devs but compiler can. 

Ex-

cout << "manjhss" ; // devs view
std :: cout << "manjhss" ; // compiler view

Below, compiler first check for main() func cuz it is the only func which executes. Described statement inside main() func executes and nothing else.

int main() { // starting of program

	// statement for execution


} // ending of program


# HOW COMP understand +ve & -ve values such as 2 & -2?

First it convert value into binary

2 == 10

suppose 2 is stored in 3 bits memo, then

010 // is positive

positive value starts with zeros

110 // is negative

negative value starts with one and how we can convert pos to neg. Follow below steps with 3 bits memo

find value's binary // 2 == 010
1st compliment // 010 == 101
2nd compliment // 101 + 1 == 110

Now it is ready to store in comp memo

# Facts

0 will be treated as positive
Positive limitation + 2n - 1 - 1
Negative limitation - 2n - 1 

