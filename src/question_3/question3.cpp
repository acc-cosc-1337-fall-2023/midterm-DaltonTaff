#include "question3.h"

bool test_config()
{
    return true;
}

double get_sales_commission(double num)
{
if(num>=0 && num<=499)
return (num*0.05);
else if(num>=500 && num<=999)
return (num * 0.06);
else if(num>=1000 && num<=1499)
return (num*0.07);
else
return (num*0.08);
}