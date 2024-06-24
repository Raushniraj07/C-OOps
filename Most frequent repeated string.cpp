#include <bits/stdc++.h>
using namespace std;
char findMaxOccuringChar(char str[]){
   int freq[26] = { 0 };
   int maxFreq = -1;
   char maxFreqChar;
   int len = strlen(str);
   for (int i = 0; i < len; i++)
      freq[str[i] - 'a']++;
   for (int i = 0; i < 26; i++)
      if (maxFreq < freq[i]) {
         maxFreq = freq[i];
         maxFreqChar = (char)(i + 'a');
      }
   return maxFreqChar;
}
int main(){
   char str[] = "programming";
   cout<<"Maximum occurring character of input string is "<<findMaxOccuringChar(str);
   return 0;
}