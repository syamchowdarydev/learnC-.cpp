/*week-5)Take a sentence as input (use getline). 
Count how many words it has (words are separated by spaces).
*/
#include <iostream>
#include <sstream>  // For istringstream
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);  // Read the full line including spaces

    istringstream iss(sentence);  // Create a stream from the sentence
    string word;
    int count = 0;

    // Extract each word and count them
    while (iss >> word) {
        count++;
    }

    cout << "The sentence has " << count << " words." << endl;

    return 0;
}
