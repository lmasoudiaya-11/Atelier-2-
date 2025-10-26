#include <iostream>
#include <string>

using namespace std;

void permute(string str, int start, int end) {
    if (start == end) {
        cout << str << endl; 
    } else {
        for (int i = start; i <= end; i++) {
          
            char tmp = str[start];
            str[start] = str[i];
            str[i] = tmp;

            permute(str, start + 1, end); 

          
            tmp = str[start];
            str[start] = str[i];
            str[i] = tmp;
        }
    }
}

int main() {
    string str;
    cout << "Entrez une chaîne : ";
    cin >> str;

    cout << "Toutes les permutations sont : " << endl;
    permute(str, 0, str.length() - 1);

    return 0;
}