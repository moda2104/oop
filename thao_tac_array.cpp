#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

extern int nSize;

// chi thi tien xu ly define
#define MAX 100

// Declare prototype
void in_array(int arr[], int &nSize);
void out_array(int arr[], int nSize);
void copy_array(int arr[], int nSize, int cparr[]);
int find_array(int arr[], int nSize, int x);
void arrange_array(int arr[], int nSize);
void add_array(int arr[], int &nSize, int idx, int x);
void delete_array(int arr[], int &nSize, int idx);

int main()
{
    int arr[MAX], nSize, cparr[MAX];

    in_array(arr, nSize);
    //arrange_array(arr, nSize);
    out_array(arr, nSize);

    int idx, x;
    char check;
    cout << "Delete or Add ? D/A"; cin >> check;
    cout << endl;

    if (check == 'D')
    {
        cout << "Enter position want to delete: ";
        cin >> idx; 
        cout << endl;
        delete_array(arr, nSize, idx);
    }
    else if (check == 'A')
    {
        cout << "Enter a number want to add: ";
        cin >> x;
        cout << endl;
        cout << "Enter position want to add: ";
        cin >> idx;
        cout << endl;
        add_array(arr, nSize, idx, x);
    }

    out_array(arr, nSize);
    // cout << "After copying array\n";
    // copy_array(arr, nSize, cparr);
    // out_array(cparr, nSize);

    // int x;
    // cout << "Enter a number you want to find: ";
    // cin >> x;
    // int index = find_array(arr, nSize, x);
    // if (index == -1)
    //     cout << "No element found !\n";
    // else cout << index << endl;

    return 0;
}

void in_array(int a[], int &n)
{
    cout << "Enter the acount of array: ";
    cin >> n;

    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }
}

void out_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}

void copy_array(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

int find_array(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
            return i;
    }
    return -1;
}

void arrange_array(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tam;
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
}

void add_array(int a[], int &n, int idx, int x)
{
    if (0 <= idx && idx <= n)
    {
        for (int i = n; i > idx; i--)
        {
            a[i] = a[i - 1];
        }
        a[idx] = x;
        n++;
    }

}

void delete_array(int a[], int &n, int idx)
{
    if (0 <= idx && idx <= 0)
    {
        for (int i = idx; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }
}