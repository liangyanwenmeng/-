/*
ID: Yan Liang
PROG: namenum
LANG: C++
*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char s1[15],s2[15];
int key[28] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9};
int main()
{
	freopen("namenum.in","r",stdin);
	freopen("namenum.out","w",stdout);
	cin >> s1;
	int n1 = strlen(s1);
	freopen("dict.txt","r",stdin);
	bool flag = 0;
	while(cin >> s2)
	{
		int n2 = strlen(s2);
		if(n1 == n2)//ERTY
		{
		//	cout << n2 << endl;
		//	cout << key[s2[n1-n2]-'A'] << " " << s1[n1-n2] << endl;
			while(key[s2[n1-n2]-'A'] == s1[n1-n2]-'0' && n2 >= 0)
			{
				//cout << key[s2[n1-n2]-'A'] << " " << s1[n1-n2] << endl;
				n2--;
				if(n2 == 0)
				{
					cout << s2 << endl;
					flag = 1;
				}
			} 
		}
	}
	if(flag == 0) cout << "NONE" << endl;
	return 0;
} 
