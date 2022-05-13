#include <iostream>
#define MAX_N 100
#define MAX 1000000000

using namespace std;

int nums[MAX_N + 1];
int n;

// in ra so lon nhat va nho nhat trong mang
void a()
{
    int min = nums[0];
    int max = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

// dem so luong chan le trong mang
void b()
{
    int evenNumbers = 0;
    int oddNumbers = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
            evenNumbers++;
        else
            oddNumbers++;
    }
    cout << "So chan: " << evenNumbers << endl;
    cout << "So le: " << oddNumbers << endl;
}

int isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

// liet ke cac so nguyen to trong mang
void c()
{
    for (int i = 0; i < n; i++)
    {
        if (isPrime(nums[i]))
            cout << nums[i] << " ";
    }
    cout << endl;
}

// in ra chi so cua so nho nhat trong mang
void d()
{
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[min])
            min = i;
    }
    cout << "index of min: " << min << endl;
}

// so lon nhat va nho lon thu 2
void e()
{
    int max1 = -MAX - 1;
    int max2 = -MAX - 1;
    for (int i = 0; i < n; i++)
    {
        if (max1 <= nums[i])
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (max2 < nums[i])
            max2 = nums[i];
    }
    cout << "Max1: " << max1 << endl;
    cout << "Max2: " << max2 << endl;
}

// so lon nhat va so lon thu 2
void f()
{
    int max1 = -MAX - 1;
    int max2 = -MAX - 1;
    for (int i = 0; i < n; i++)
    {
        if (max1 < nums[i])
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (max2 < nums[i] && nums[i] < max1)
            max2 = nums[i];
    }
    cout << "Max1: " << max1 << endl;
    cout << "Max2: " << (max2 == -MAX - 1 ? -1 : max2) << endl;
}

int allIsOdd(int x)
{
    while (x > 0)
    {
        int r = x % 10;
        if (r % 2 == 0)
            return 0;
        x /= 10;
    }
    return 1;
}

// dem so luong cac so co chu so toan le
void g()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (allIsOdd(nums[i]))
            count++;
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        if (allIsOdd(nums[i]))
            cout << nums[i] << " ";
    }
    cout << endl;
}

// in ra cac so co 2 so lon hon trong gmang
void h()
{
    int max1 = -MAX - 1;
    int max2 = -MAX - 1;
    for (int i = 0; i < n; i++)
    {
        if (max1 < nums[i])
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (max2 < nums[i] && nums[i] < max1)
            max2 = nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < max2)
            cout << nums[i] << " ";
    }
    cout << endl;
}

int isBeautyNumber(int x)
{
    int hasNine = false;
    int hasOne = false;
    while (x > 0)
    {
        if (hasNine && hasOne)
            return 1;
        int r = x % 10;
        if (r == 1)
            hasOne = 1;
        if (r == 9)
            hasNine = 1;
        x /= 10;
    }
    return 0;
}

// in ra so dep neu chua ca 1 va 9
void i()
{
    for (int i = 0; i < n; i++)
    {
        if (isBeautyNumber(nums[i]))
            cout << nums[i] << " ";
    }
    cout << endl;
}

void j()
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && nums[i] * nums[i + 1] < 0)
            cout << nums[i] << " ";
        else if (i == n - 1 && nums[i - 1] * nums[i] < 0)
            cout << nums[i] << " ";
        else if (nums[i - 1] * nums[i] < 0 || nums[i] * nums[i + 1] < 0)
            cout << nums[i] << " ";
    }
    cout << endl;
}

// kiem tra mang doi xung
void k()
{
    int doixung = 1;
    for (int i = 0; i < n / 2; i++)
    {

        if (nums[i] != nums[n - 1 - i])
        {
            doixung = 0;
            break;
        }
    }
    if (doixung)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    freopen("./bai01.txt", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
    a();
    b();
    c();
    d();
    e();
    f();
    g();
    h();
    i();
    j();
    k();
}