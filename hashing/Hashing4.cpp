#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string tracePath(unordered_map<string, string> map){
    string result = "";
    int size = map.size();
    while (size--) {
        for (auto i = map.begin(); i != map.end(); i++) {
            if (map.find(i -> second) == map.end()) {
                result = i -> first + "->" + i -> second + ", " + result;
                map.erase(i -> first);
                break;
            }
        }
    }
    return result;
}

int main(){
    unordered_map <string, string> input;
    int n;
    cin >> n;
    while (n) {
        string a, b;
        cin >> a >> b;
        input[a] = b;
        n -= 1;
    }
    cout << tracePath(input);
    
    return 0;
}