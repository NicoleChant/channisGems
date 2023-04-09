#include <iostream>
#include <fstream>
#include <string.h>


int traverseStringPartI(std::string& digit, int N){

  // Traverse the string
  char symbols[N+1];
  strcpy(symbols, digit.c_str());
  int total = 0;
  int next;
  int cur;
  bool flag;

  // O(N)
  for(int i=0; i<N; ++i){
    cur = (int)(symbols[i]) - 48;

    if (i<N-1){
      next = (int)(symbols[i+1]) - 48;
    }
    else{
      next = (int)(symbols[0]) - 48;
    }
    if (cur==next){
      total += cur;
    }

  }

  return total;
}

int traverseStringPartII(std::string& digit, int N){

  // Traverse the string
  char symbols[N+1];
  strcpy(symbols, digit.c_str());
  int total = 0;
  int next;
  int cur;
  bool flag;
  int jump = N/2;

  // O(N)
  for(int i=0; i<N; ++i){
    cur = (int)(symbols[i]) - 48;

    if (i<N-jump){
      next = (int)(symbols[i+jump]) - 48;
    }
    else{
      next = (int)(symbols[jump - (N-1-i) -1]) - 48;
    }
    if (cur==next){
      total += cur;
    }

  }

  return total;
}


int main(){
  std::ifstream inputFile("input.txt");

  std::string digit;
  while (getline (inputFile, digit)){
    break;
  }
  int N = digit.length();

  int resultPartI = traverseStringPartI(digit, N);
  int resultPartII = traverseStringPartII(digit, N);
  std::cout << "RESULT PART I:\n" << resultPartI << "\n";
  std::cout << "RESULT PART II:\n" << resultPartII << "\n";

	return 0;
}
