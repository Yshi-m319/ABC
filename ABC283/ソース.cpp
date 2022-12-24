#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
#include <set>
#include <map>
#include <math.h>
#include <queue>
using namespace std;
typedef unsigned long long int lli;
int main() {
	string s;
	auto oo=false,o=false;
	cin>>s;
	int ans=0;
	int size=s.size()-1;
	for (int i=0;i< s.size();i++)
	{
		//ÅIT
		if (i  == size)
		{
			ans++;
		}
		//1~9‚¾‚Á‚½‚ç
		else if ('1' <= s[i] && s[i] <= '9')
		{
			cout<<s[i]<<flush;
			ans++;
		}
		else if (s[i] == '0')
		{
			cout << s[i] << flush;
			if (s[i + 1] == '0')
			{
				ans++;
				i++;
			}
			else
			{
				ans+=2;
				i++;
			}
		}
	}
	//cout<<ans<<endl;
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
#include <set>
#include <map>
#include <math.h>
using namespace std;
typedef unsigned long long int lli;
int main() {
	auto m=map<int,int>();
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		int tmp;
		cin>>tmp;
		m[i]=tmp;
	}
	int q;
	cin>>q;
	for (int i = 0; i < q; i++)
	{
		int p,k;
		cin>>p>>k;
		if (p == 1)
		{
			int x;
			cin>>x;
			m[k]=x;
		}
		else
		{
			cout<<m[k]<<endl;
		}
	}

}*/
//A
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
#include <set>
#include <map>
#include <math.h>
using namespace std;
typedef unsigned long long int lli;
int main() {
	int a,b;
	cin>>a>>b;
	cout<<(lli)pow(a,b)<<endl;
}
*/