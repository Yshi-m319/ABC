#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;
int main() {
typedef unsigned long long int ull;
	ull k;
	cin>>k;
	auto prime = [](ull n)
	{
		auto ans=vector<ull>(100,1);
		int itr=0;
		if (n % 2 == 0)
		{
			ans[0] = 2;
			itr++;
		}
			
		for (ull i = 3; i < n; i+=2)
		{
			if (n % i == 0)
			{
				ans[itr]=i;

			}
		}
	};
	
}

//C
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;
int main() {
	string s, t;
	cin >> s >> t;
	int n = s.size();
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != t[i])
		{
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << n + 1 << endl;

}
*/
//B
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;
int main() {
	int n;
	cin>>n;
	auto v=vector<int>(n);
	auto a = vector<int>(n);
	auto re = vector<int>(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}

	int sum=0;
	for (int i = 0; i < n; i++)
	{
		a[i]=v[i]-sum;
		sum+=a[i];
	}
	for (int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
}
*/
//A
/*#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
	int h,w;
	cin>>h>>w;
	auto v=vector<string>(h);
	for (int i = 0; i < h; i++)
	{
		cin>>v[i];
	}
	int ans=0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			ans+=v[i].at(j)=='#'?1:0;
		}
	}
	cout<<ans<<endl;

}*/