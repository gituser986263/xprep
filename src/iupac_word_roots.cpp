


#include <iostream>
#include <string>



std::string lower_case (const std::string& str) {
  std::string result;
  for (char ch : str) {
    result += std::tolower(ch);
  }
  return result;
}

// remove surrounding whitespaces
std::string trim (const std::string& str) {
    // Find the position of the first non-space character
    std::size_t start = str.find_first_not_of(" \t\n\r\v\f");

    // If the string is empty or contains only whitespace
    if (start == std::string::npos) {
        return "";
    }

    // Find the position of the last non-space character
    std::size_t end = str.find_last_not_of(" \t\n\r\v\f");

    // Return the substring starting from the first non-space character to the last non-space character
    return str.substr(start, end - start + 1);
}



std::string IUPAC_WORD_ROOTS[] = {"meth", "eth", "prop", "but", "pent", "hex", "hept", "oct", "non", "dec"};

int main () {
  std::cout << "IUPAC word roots" << std::endl;

  size_t chain_length = 1;
  for (const std::string& str: IUPAC_WORD_ROOTS) {
    std::string input_line;

    std::cout << "chain length: " << chain_length << " word root: ";
    std::getline(std::cin, input_line);

    if (str != lower_case(trim(input_line))) {
      std::cout << str << " incorrect" << std::endl;
      break;
    }

    ++chain_length;
  }

  return 0;
}



