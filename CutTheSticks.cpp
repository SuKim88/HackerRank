#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void calculate(vector<int>& arr);
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    calculate(arr);
    return 0;
}
void calculate(vector<int>& vecInt)
{
    sort(vecInt.begin(), vecInt.end());
    int iCut = vecInt[0];
	vector<int> vecTmp;	
	
	while (!vecInt.empty())
	{
		iCut = vecInt[0];
		for (int i = 0; i < vecInt.size(); ++i)
		{
			int iDiff = vecInt[i] - iCut;
			
			if (iDiff != 0)
				vecTmp.push_back(iDiff);
				
		}
		cout << vecInt.size() << endl;
		vecInt.clear();
		vecInt.swap(vecTmp);
	}
    
}