#include <bits/stdc++.h>
using namespace std;
 
void printFrequency(string str)
{
    map<string, int> M;
    string word = "";
    str += ' ';
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (M.find(word) == M.end()) {
                M.insert(make_pair(word, 1));
                word = "";
            }
 
            // update the frequency
            else {
                M[word]++;
                word = "";
            }
        }
 
        else
            word += str[i];
    }
 
    cout<<"Word \t    Frequency\n\n";
    
    for (auto& it : M) {
        cout << it.first << "\t -> \t"
             << it.second
             << endl;
    }
}
 


int main()
{
    string str = "Geeks For Geeks";
 
    printFrequency(str);
    return 0;
}
