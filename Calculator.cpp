#include <iostream>

using namespace std;
int closer()
{
    string a;
    std::cout << "\n\nPress 1 to close the program or 0 to continue: ";
    std::cin >> a;
    if (a=="1")
    {
        exit(0);
    }
    else if (a=="0")
    {
        return 0;
    }
    else
    {
        std::cout << "1 or 0. Donkey. 1 or 0. Are you high? Do it again.\n\n";
        closer();
    }
}
double add(double x, double y)
{
    double z;
    z=x+y;
    return z;
}
double sub(double x,double y)
{
    double z;
    z=x-y;
    return z;
}
double mul(double x, double y)
{
    double z;
    z=x*y;
    return z;
}
double DIV(double x,double y)
{
    double z;
    z=x/y;
    return z;
}
int exp(int x,int y)
{
    double z=1;
    for (int i=0; i<y; i++)
    {
        z=z*x;
    }
    return z;
}
int main()
{
    std::cout << "\nCalculator";
    int c;
    double x,y,z;
    std::cout << "\n\nOptions:\n1:Add\n2:Subtract\n3:Multiply\n4:Divide\n5:Exponent\n6:Exit\nChoice(1,2,3,4,5 or 6): ";
    std::cin >> c;
    if (c==1)
    {
        std::cout << "\nNumber 1: ";
        std::cin >> x; 
        std::cout << "Number 2: ";
        std::cin >> y;
        z=add(x,y);
        std::cout << "The sum of " << x << " and " << y << " = " << z;
    }
    else if (c==2) 
    {
        std::cout << "\nNumber 1: ";
        std::cin >> x;
        std::cout << "Number 2: ";
        std::cin >> y;
        z=sub(x,y);
        std::cout << "The difference of " << x << " and " << y << " = " << z;
    }
    else if (c==3)
    {
        std::cout << "\nNumber 1: ";
        std::cin >> x;
        std::cout << "Number 2: ";
        std::cin >> y;
        z=mul(x,y);
        std::cout << "The product of " << x << " and " << y << " = " << z;
    }
    else if (c==4)
    {
        std::cout << "\nNumber 1: ";
        std::cin >> x;
        std::cout << "Number 2: ";
        std::cin >> y;
        z=DIV(x,y);
        std::cout << "The quotient of " << x << " and " << y << " = " << z;
    }
    else if (c==5)
    {
        std::cout << "\nNumber 1: ";
        std::cin >> x;
        std::cout << "Number 2: ";
        std::cin >> y;
        x=int(x);
        y=int(y);
        z=exp(x,y);
        std::cout << x << " raised to the power of " << y << " = " << z;
    }
    else if (c==6)
    {
        exit(0);
    }
    else
    {
        std::cout << "\nInvalid Option\n" << "Restarting Program\n\n";
        main();
    }
    if (closer()==0)
    {
        main();
    }
}
