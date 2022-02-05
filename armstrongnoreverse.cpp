#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   int sum = 0;
    int originaln = n;
    while (n >0)
    {
        int lastdigit = n % 10;
        sum +=pow(lastdigit, 3);    //*lastdigit*lastdigit;
        n = n / 10;      //n divide hole zero ho jaayega
    }
    if (originaln==sum)
    {
        cout<<"armstrong digit";
    }
    else{
        cout<<"not armstrong digit";
    }
    


    return 0;
}