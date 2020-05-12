#include <iostream>
#include <fstream>
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem;


int main(int argc, char **argv) {
  fs::path input_file(argv[1]);

  // Get info from path
  if (fs::exists(input_file)) {
    cout << "exists() = " << fs::exists(input_file) << endl
     << "root_name() = " << input_file.root_name() << endl
     << "root_path() = " << input_file.root_path() << endl
     << "relative_path() = " << input_file.relative_path() << endl
     << "parent_path() = " << input_file.parent_path() << endl
     << "filename() = " << input_file.filename() << endl
     << "stem() = " << input_file.stem() << endl
     << "extension() = " << input_file.extension() << endl;
  } else {
    cout << "Entered path does not exist" << endl;
  }

  // Iterators in folders example
  fs::path input_directory = input_file.parent_path();
  cout << "The files in the parent directory are: " << endl;
  for (auto & i : fs::directory_iterator(input_directory)) {
    cout << i.path() << endl;
  }

  // Create new directories
  fs::path new_directory = input_directory;
  new_directory /= argv[2];
  fs::create_directory(new_directory);
  return 0;
}

