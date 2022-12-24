#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
#include <set>
#include <map>
using namespace std;
typedef unsigned long long int lli;
int main() {

}
//A
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <regex>
using namespace std;
typedef unsigned long long int lli;
int main() {
	int k;
	cin>>k;
	for (int i = 0; i < k; i++)
	{
		cout<<char('A'+i);
	}
	cout<<endl;
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
#include <regex>
#include <set>
#include <map>
using namespace std;
typedef unsigned long long int lli;
int main() {
	int n,m;
	cin>>n>>m;
	auto s=vector<vector<char>>(n,vector<char>(m));

	auto ans=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char tmp;
			cin>>tmp;
			s[i][j]=tmp=='o'?1:0;
		}
	}
	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < n; y++)
		{
			int correct=1;
			if(x==y)
				break;
			for (int i = 0; i < m; i++)
			{
				correct*=s[x][i]+s[y][i];
			}
			if (correct != 0)
			{
				ans++;
			}

		}
	}
	cout<<ans<<endl;
}
*/