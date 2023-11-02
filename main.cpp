//
//  main.cpp
//  p10-2
//
//  Created by Jakob Hammond on 11/2/23.
//

#include <iostream>
using namespace std;

int count_words(string str);
int main(void){
    cout << count_words("I don't give a Holstein for programmers that can only spell a variable one way. (Dr. Stephany)") << endl;
}

int count_words(string str){
    int words = 1;
    for(int i = 1; i <= str.length(); i++){
        string first;
        first = str.substr(str.length() - i);
        if(first.front() == ' '){
            first = str.substr(str.length() - (i + 1));
            if(first.front() != ' '){
                words++;
            }
        }
    }
    return words;
}
