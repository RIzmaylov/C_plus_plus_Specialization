#include <iostream>

using namespace std;
/*
Дана структура LectureTitle:
Допишите конструктор и структуры Specialization, Course, Week так, 
чтобы объект LectureTitle можно было создать с помощью кода
LectureTitle title(
    Specialization("C++"),
    Course("White belt"),
    Week("4th")
);
но нельзя было с помощью следующих фрагментов кода:
LectureTitle title("C++", "White belt", "4th");

LectureTitle title(string("C++"), string("White belt"), string("4th"));

LectureTitle title = {"C++", "White belt", "4th"};

LectureTitle title = {{"C++"}, {"White belt"}, {"4th"}};

LectureTitle title(
    Course("White belt"),
    Specialization("C++"),
    Week("4th")
);

LectureTitle title(
    Specialization("C++"),
    Week("4th"),
    Course("White belt")
);
*/
struct Specialization {
    string value;
    explicit Specialization(string new_value) {
        value = new_value;
    } 
};
struct Week {
    string value;
    explicit Week(string new_value) {
        value = new_value;
    } 
};
struct Course {
    string value;
    explicit Course(string new_value) {
        value = new_value;
    } 
};
struct LectureTitle {
  string specialization;
  string course;
  string week;

  LectureTitle(Specialization new_spec, Course new_course, Week new_week) {
    specialization = new_spec.value;
    course = new_course.value;
    week = new_week.value;
  }
};


int main() {
    LectureTitle title(
    Specialization("C++"),
    Course("White belt"),
    Week("4th")
);
    return 0;
}