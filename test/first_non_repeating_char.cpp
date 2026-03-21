// you are given a string, return any char that doesn't appear more than once in that string else return '.'
// s will contain only lower case characters from ['a', 'z']


// examples 
// s = "abccdeef"
// you can return 'a' or 'b' or 'd' or 'f'

// s = "aadfdfffdda"
// you will return '.'

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char non_repeating_char(string s) {
    // your implementation goes here
    
    // 1.CREATE A FREQUENCY VECTOR
    //2.TRAVERSE THE STRING FROM LEFT TO RIGGHT.
    //3.FOR EACH CHARCTER S[I]
    // INDEX = S[I]-a
    // freq[index]++
    // 4.traverse the tsring again 
    // for each vharacter s[i]:
    // if[freq[i] -'a'] == 1;
    // return s[i];
    // at the end
    // return'.'

    vector<int> freq(26, 0); // O(26) = O(1)
    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;  // RUNTIME ERROR
    }
    for(int i = 0; i < s.length(); i++){
        if(freq[s[i] - 'a'] == 1) {
            return s[i];
        }
    }
    return '.';

}

// 10 / 10
// 10 / 10
// 0 / 10