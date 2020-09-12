/* Check Vowel using Switch Statement By Harshit Jaiswal
(TIT vs National Institute of Science & Technology Coding Competition: 1st position holder )*/
#include<bits/stdc++.h>

using namespace std;

int checkVowel(char c)
{
    switch(c)
    {
        case 'A': return 1; break;
        case 'E': return 1; break;
        case 'I': return 1; break;
        case 'O': return 1; break;
        case 'U': return 1; break;
        case 'a': return 1; break;
        case 'e': return 1; break;
        case 'i': return 1; break;
        case 'o': return 1; break;
        case 'u': return 1; break;

        default: return 0;
    }
    return 0;
}

int main()
{
    char vowelOrNot;
    cout<<"Enter an alphabet: ";
    cin>>vowelOrNot;

    if(checkVowel(vowelOrNot))
        cout<<vowelOrNot<<" is Vowel";
    else cout<<vowelOrNot<<" is not Vowel (It's a consonent)";

    return 0;
}