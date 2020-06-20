#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<int> v;
    int i;
    cout << "enter 0 to end\n";
    do{
        cin >> i;
        v.push_back(i);
    }
    while(i);
        cout << "my vector stories" << int(v.size()) << "numbers.\n";

return 0;
}
