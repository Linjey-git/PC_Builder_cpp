#include <iostream>

using namespace std;

struct Component {
    string name;
    float price;
    string description;
};

enum {
    create_build,
    compare_builds,
    exit_program
};

int main() {
    int answer;
    bool is_work = false;

    while (!is_work) {
        cout << "Make your choice:"
             << "\n0 - Create Build"
             << "\n1 - Compare Build"
             << "\n2 - Exit"
             << "\nyour choice: " << endl;
        cin >> answer;
        switch (answer) {
            case create_build:
                //TODO create build
                break;
            case compare_builds:
                //TODO compare builds
                break;
            case exit_program:
                is_work = true;
                break;
            default:
                cout << "Wrong character was used!" << endl;
                break;
        }
    }

    return 0;
}
