#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
using namespace std;
int main() {
	typedef unsigned long long int lli; 
	int n;
	lli t;
	cin>>n>>t;
	auto a=vector<int>(n);
	lli sum=0;
	for (int i = 0; i < n; i++)
	{
		int tmp=0;
		cin>>tmp;
		sum+=tmp;
		a[i]=tmp;
	}
	lli cnt=t%sum;
	lli sum2=0;
	lli pre=0;
	for (int i=0;i<n;i++)
	{
		sum2+=a[i];
		if (cnt < sum2)
		{
			cout<<i+1<<" "<<cnt-pre;
			return 0;
		}
		pre=sum2;
	}
	return -1;
}
//B
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
using namespace std;
int main() {
	auto re = regex(R"(^[A-Z]\d{6}[A-Z]$)");
	string s;
	smatch match;
	cin >> s;
	if (!regex_search(s, re))
	{
		cout<<"No"<<endl;
		return 0;
	}


	cout << (s[1]=='0'? "No":"Yes" )<< endl;

}
*/
//A
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
	for (auto i = n; i >= 0; i--)
	{
		cout<<i<<endl;
	}

}
*/