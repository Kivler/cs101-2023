#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class ReadClass {
public:
    void showClass() {
        string filename = "main.cpp";
        int numClasses = countClasses(filename);
        vector<string> classNames = getClassNames(filename);

        cout << numClasses << " class in " << filename << endl;
        for (const string& className : classNames) {
            cout << "class " << className << endl;
        }
    }

private:
    int countClasses(const string& filename) {
        ifstream file(filename);
        string line;
        int count = 0;

        while (getline(file, line)) {
            if (isClassDeclaration(line)) {
                count++;
            }
        }

        file.close();
        return count;
    }

    vector<string> getClassNames(const string& filename) {
        vector<string> classNames;
        ifstream file(filename);
        string line;

        while (getline(file, line)) {
            if (isClassDeclaration(line)) {
                string className = extractClassName(line);
                classNames.push_back(className);
            }
        }

        file.close();
        return classNames;
    }

    bool isClassDeclaration(const string& line) {
        
        return (line.find("class") != string::npos) && (line.find_first_not_of(" \t{") == line.find("class"));
    }

    string extractClassName(const string& line) {
     
        string className;
        size_t startPos = line.find("class") + 6;   
        size_t endPos = line.find(" ", startPos);  
        className = line.substr(startPos, endPos - startPos);
        return className;
    }
};

int main() {
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
