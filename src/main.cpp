#include <iostream>
#include <fstream>
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem;


int main(int argc, char **argv) {
  fs::path input_path(argv[1]);
  if (fs::exists(input_path)) {
    cout << "exists() = " << fs::exists(input_path) << endl
     << "root_name() = " << input_path.root_name() << endl
     << "root_path() = " << input_path.root_path() << endl
     << "relative_path() = " << input_path.relative_path() << endl
     << "parent_path() = " << input_path.parent_path() << endl
     << "filename() = " << input_path.filename() << endl
     << "stem() = " << input_path.stem() << endl
     << "extension() = " << input_path.extension() << endl;
  } else {
    cout << "Entered path does not exist" << endl;
  }
   // for (auto & address : fs::directory_iterator(argv[1])) {
  return 0;
}

