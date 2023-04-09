#include <iostream>
#include <fstream>

void traverseString(std::string &digit, int N){

   // Traverse the string
   int total = 0;
   int temp;
   int prev;
    for (auto &ch : digit) {

        // Print current character
        prev = stoi(ch);
        std::cout<< stoi(ch) << " ";

    }

}


int main(){
  std::ifstream inputFile("input.txt");

  std::string digit;
  while (getline (inputFile, digit)){
    break;
  }

  std::cout << digit;
  int N = digit.length();
  traverseString(digit, N);

	return 0;
}
