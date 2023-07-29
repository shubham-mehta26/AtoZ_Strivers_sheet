#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr1[n];
		for (int i = 0; i < n; i++)
			cin >> arr1[i];
		int arr2[n];
		for (int i = 0; i < n; i++)
			cin >> arr2[i];
		if (arr1[0] != arr2[0] || arr1[n - 1] != arr2[n - 1])
		{
			cout << "NO" << endl;
			continue;
		}
		int flag = 1;
		// for(int i=1 ; i<n-1 ; i++){
		// 	if(arr1[i]!=arr2[i]){
		// 		int a=arr1[i-1] | arr1[i] | arr1[i+1];
		// 		if(a!=arr2[i]){
		// 			cout<<"NO"<<endl;
		// 			continue;
		// 		}
		// 	}
		// 		flag++;
		// }
		// cout<<flag<<endl;
		int zeroes = 0; // count the number of zeroes in the arr1
		int ones = 0;
		int zero = 0; // count the number of zeroes as we traverse the array again
		int one = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr1[i] == 0)
				zeroes++;
			else
				ones++;
		}
		for (int i = 0; i < n; i++)
		{
			if (arr1[i] == 0)
				zeroes--;
			else
				ones--;
			if (arr1[i] != arr2[i])
			{
				if (zero > 0 && ones > 0 || one > 0 && zeroes > 0)
					arr1[i] = arr2[i];
				else
				{
					cout << "NO" << endl;
					break;
				}
			}
			if (arr1[i] == 0)
				zero++;
			else
				one++;
		}
		if (flag == 1)
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}
