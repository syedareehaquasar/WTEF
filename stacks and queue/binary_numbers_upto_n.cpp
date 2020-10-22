#include <iostream>
#include <queue>
#include<vector>
// #include "queue.h"
// #include <cstdlib>

using namespace std;

vector<string> findBin(int n) {
    queue<string> binq;
    vector<string> output;
    binq.push("1");
    int i = 0;
    while (n--) {
        string a = binq.front();
        binq.pop();
        output.push_back(a);
        string b = a;
        binq.push(a.append("0"));
        binq.push(b.append("1"));
        i++;
    }
    return output;
}

int main() {
  auto output = findBin(4);
  cout<<"all binary upto 4"<<endl;
  for (int i = 0; i < output.size(); i++)
    cout << output[i] << " ";
  cout<<"\n\n-----------------------------\n"<<endl;
  auto out = findBin(5);
  cout<<"all binary upto 5"<<endl;
  for (int i = 0; i < out.size(); i++)
    cout << out[i] << " ";
}
