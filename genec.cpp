#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
  std::ofstream writeFile;
  writeFile.open(".editorconfig");
  writeFile << "root=true";
  writeFile << "\n";
  writeFile << "[*]";
  writeFile << "\n";
  writeFile << "indent_style=" << argv[1];
  writeFile << "\n";
  writeFile << "indent_size=" << argv[2];

  std::cout << "done✨" << std::endl;
}

