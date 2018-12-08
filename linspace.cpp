#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


//generates N points between min and max and return as vector

vector<double> linspace(double min, double max, int n)
{
	vector<double> result;
	// vector iterator
	int iterator = 0;

	for (int i = 0; i <= n-2; i++)	
	{
		double temp = min + i*(max-min)/(floor((double)n) - 1);
		result.insert(result.begin() + iterator, temp);
		iterator += 1;
	}

	//iterator += 1;

	result.insert(result.begin() + iterator, max);
	return result;
}

int main() {
 
   vector<double> a ;
   a =  linspace(0,1,8);
   for(int i=0;i<8;i++) {
   	cout<<a[i]<<endl;
   }

	return 0;
}