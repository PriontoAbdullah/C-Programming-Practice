#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<int> myvector;
    int sum(0);
    myvector.push_back(100);
     myvector.push_back(200);
      myvector.push_back(300);
      for(int i=0; i<myvector.size(); i++)
        cout <<' ' << myvector[i];
      cout << '\n';


      while(!myvector.empty())
      {
          sum+=myvector.back();
          myvector.pop_back();

      }
  cout << sum;
    return 0;
}
