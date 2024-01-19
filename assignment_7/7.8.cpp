#include <bits/stdc++.h>
using namespace std;

bool cheo(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && (a[i][i] != 1))
				return false;
		}
	}
	return true;
}

bool down(int a[][500], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		bool check = true;
		for (int j = i + 1; j < n; j++)
		{  
			if (a[j][i] != 0)
				check = false;
		}
		if (check == false)
			count++;
	}
	if (count > 1)
		return false;
	else return true;
}

bool up(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i != j && a[j][i] != 0)
				return false;
			if (i == j && a[j][i] != 1)
				return false;
		}
	}
	return true;
}

int main(){
	int a[500][500];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	if ( down(a, n) && up(a, n))
		cout << "Yes";
	else cout << "No";


	return 0;
}