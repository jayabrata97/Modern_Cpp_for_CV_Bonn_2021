#include <iostream>
#include <unordered_map>
using std::cout;
using std::endl;
using std::string;

int main() {
    using StudentList = std::unordered_map<int, string>;
    StudentList cpp_students;

    // Inserting data in the students dictionary
    cpp_students.emplace(1509, "Nacho");    //[2]
    cpp_students.emplace(1040, "Pepe");   //[1]
    cpp_students.emplace(8820, "Marcelo");  //[0]

    for (const auto& [id, name] : cpp_students) {
        cout << "id: " << id << "," << name << endl;
    }
    cout << "map size: " << cpp_students.size() << endl;
    cout << "item with key 1040 is: " << cpp_students.at(1040) << endl;

    return 0;
}
