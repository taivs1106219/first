#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // int a = 100;
    // char b[] = "A";
    // string s1 = "行政大樓四樓資訊科";

    // cout << "數字顯示：" << a << endl;
    // cout << "字元顯示：" << b << endl;
    // cout << "字串顯示："
    //      << "大安高工資訊科" << endl;
    // cout << s1 << endl;

    int a;
    char b;
    string c;

    cout << "請輸入數字a=";
    cin >> a;
    cout << "請輸入字元b=";
    cin >> b;
    cout << "請輸入字串c=";
    cin >> c;

    cout << "輸入的數字a=" << a << endl;
    cout << "輸入的字元b=" << b << endl;
    cout << "輸入的字串c=" << c << endl;
    return 0;
}