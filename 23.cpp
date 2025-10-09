#include <iostream>

using namespace std;

int main() {
   
    char s[] = "simple string example";
    char b[50]; buffer for reverse
    char sub[] = "string";
    char target = 'e';

#include <iostream>

using namespace std;

int main() {
   
    char s[] = "simple string example";
    char b[50]; 
    char sub[] = "string";
    char target = 'e';

    cout << "String: " << s << "\n";
    
 
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    cout << "Length: " << len << "\n";


    for (int i = 0; i <= len; ++i) {
        b[i] = s[i];
    }
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char t = b[start];
        b[start] = b[end];
        b[end] = t;
        start++;
        end--;
    }
    cout << "Reversed: " << b << "\n";

 
    bool found = false;
    int i = 0;
    while (s[i] != '\0' && !found) {
        int ti = i;
        int j = 0;
        while (s[ti] == sub[j] && sub[j] != '\0') {
            ti++;
            j++;
        }
        if (sub[j] == '\0') {
            found = true;
        }
        i++;
    }
    cout << "Has '" << sub << "'? " << (found ? "Yes" : "No") << "\n";


    int count = 0;
    for (int k = 0; s[k] != '\0'; ++k) {
        if (s[k] == target) {
            count++;
        }
    }
    cout << "Count of '" << target << "': " << count << "\n";

    return 0;
}
