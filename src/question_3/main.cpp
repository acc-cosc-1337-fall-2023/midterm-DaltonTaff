#include "question3.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
char input = 'y';
while(input == 'y'){
double sales;
cout << "Enter number of sales: ";
cin >> sales;
while(sales<0){
cout << "Invalid input:\n";
cout << "Please enter number greater than 0:";
cin >> sales;
}
double value = get_sales_commission(sales);
cout << "Sales of " << sales << " has a commission of " << value <<".\n";
cout << "If you want to continue press charcater y: ";
cin >> input;
if (input!='y')
break;
}
return 0;
}