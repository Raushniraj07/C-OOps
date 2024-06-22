/*#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter a character in lowercase: "; 
   cin>>ch;
   ch=ch-32;
   cout<<"Entered character in uppercase: "<<ch;
   return 0;
}*/
#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main()
{
    char s[30];
    cout << "Enter the String in lowercase: "; 
    cin.getline(s, 30); // Read up to 29 characters and reserve space for the null terminator

    // Convert each character to uppercase
    for(int i = 0; i < strlen(s); i++) {
        // Only convert lowercase characters to uppercase
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] -32; // Equivalent to s[i] - 32
        }
    }

    cout << "The entered string in uppercase: " << s << endl;
    return 0;
}
