#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <set>
#include <algorithm>

using namespace std;

int main() 
{
	auto re= regex(R"(^[HDCS][A23456789TJQK])");
	int n;
	cin>>n;
	auto v=vector<string>(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
		if (!regex_search(v[i], re))
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	auto size=set<string>(v.begin(),v.end()).size();
	cout<<((size==n)?"Yes":"No")<<endl;
	
}

//A	- ^{-1}
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n,x;
	cin>>n>>x;
	auto v=vector<int>(n);
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	int ans=0;
	for (int i=0;i<n;i++)
	{
		if(v[i]==x)
		{
			ans=i+1;
			break;
		}
	}
	cout<<ans<<endl;
}
*/
//B - Playing Cards Validation