#include <iostream>
#include <map>
using std::cout;
using std::endl;
using std::string;

int main() {
    using StudentList = std::map<int, string>;
    StudentList cpp_students;

    // Inserting data in the students dictionary
    cpp_students.emplace(1509, "Joy");    //[1]
    cpp_students.emplace(1040, "Duba");   //[0]
    cpp_students.emplace(8820, "Annie");  //[2]

    for (const auto& [id, name] : cpp_students) {
        cout << "id: " << id << "," << name << endl;
    }
    cout << "map size: " << cpp_students.size() << endl;
    cout << "item with key 1040 is: " << cpp_students.at(1040) << endl;
    
    return 0;
}
