// C++ program to demonstrate vector of pairs
#include<bits/stdc++.h>
using namespace std;


bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
	//declaring vector of pairs
	vector< pair <int,int> > vect;

	// initialising 1st and 2nd element of
	// pairs with array values
	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	// Entering values in vector of pairs
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );

// sorting the element in terms first
sort(vect.begin(), vect.end());

// for the second term
sort(vect.begin(), vect.end(), sortbysec);



	// Printing the vector
	for (int i=0; i<n; i++)
	{
		// "first" and "second" are used to access
		// 1st and 2nd element of pair respectively
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}

	return 0;
}




