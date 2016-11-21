#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int n);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int iBegin, iEnd, iDivider = 0;
    cin >> iBegin >> iEnd>> iDivider;
    int iReversed = 0;
    int iRemainder, iCount = 0;
    for(int i = iBegin; i <= iEnd; ++i)
    {
        iReversed = reverse(i);
        iRemainder = abs(i - iReversed) % iDivider;
        if(iRemainder == 0)
            ++iCount;
        
    }
    cout << iCount;
    return 0;
}
int reverse(int n)
{
    int iCount = -1;
    int iTmp = n;
    while(iTmp)
    {
        iTmp /= 10;
        ++iCount;
    }
    
    int iReversed = 0;
    while(n)
    {
        int iDiv, iRemainder = 0;
        iRemainder = n % 10;
        n /= 10;
        iReversed += iRemainder * pow(10, iCount);
        --iCount;
    }
    return iReversed; 
}