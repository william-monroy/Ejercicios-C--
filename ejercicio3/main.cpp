#include <sstream>
#include <string>

using namespace std;

int main() {
    
    
    ifstream infile("nombre.txt");

    string line;

    while (getline(infile, line))
    {
        istringstream iss(line);
        string read;
        if (!(iss >> read)) {
                break; 
        } 
    }

    return 0;
}

