#include "stu.h"

Student::Student(const Student& original) {
    this->surname = original.surname;
    this->name = original.name;
    this->middlename = original.middlename;
    this->adress = original.adress;
    this->phonenumber = original.phonenumber;

}

Student::Student() : Student("Studenchenko", "Student", "Studentovich", "Studencheskaya 38", "0630300033") {}

Student::Student(string surname, string name, string middlname, string adress, string phonenumber) {
    SetSurname(surname);
    SetName(name);
    SetMiddlName(middlname);
    SetAdress(adress);
    SetPhone(phonenumber);
}

Student::Student(string surname, string name, string middlname, string adress) : Student(surname, name, middlename, adress, "0687680685") {}

Student::~Student() {}

void Student::PrintStudent() const {
    cout << "Surname: " << surname << "\n";
    cout << "Name: " << name << "\n";
    cout << "Midlname: " << middlename << "\n";
    cout << "Adress: " << adress << "\n";
    cout << "Phonnumber: " << phonenumber << "\n";
}

void Student::AddPractic(int new_practic_rate) {

    grade_of_practic.push_back(new_practic_rate);
}

void Student::PrintPractic() const {
    for (int i = 0; i < grade_of_practic.size(); i++) {
        cout << grade_of_practic[i] << ", ";
    }
}

int Student::GePracticRatesCount(unsigned int index) const {
    return grade_of_practic.at(index);
}

void Student::AddHomeWork(int new_homework_rate) {

    grade_of_homework.push_back(new_homework_rate);
}

void Student::PrintHomeWork() const {
    for (int i = 0; i < grade_of_homework.size(); i++) {
        cout << grade_of_homework[i] << ", ";
    }
}

int Student::GetHomeWorkRatesCount(unsigned int index) const {
    return grade_of_homework.at(index);
}

void Student::AddExam(int new_exam_rate) {
    grade_of_exam.push_back(new_exam_rate);
}

double Student::CalculateAverageGrade() const
{
    int totalGradesCount = grade_of_practic.size() + grade_of_homework.size() + grade_of_exam.size();

    int totalGradesSum = 0;
    for (int i = 0; i < grade_of_practic.size(); ++i) {
        totalGradesSum += grade_of_practic[i];
    }
    for (int i = 0; i < grade_of_homework.size(); ++i) {
        totalGradesSum += grade_of_homework[i];
    }
    for (int i = 0; i < grade_of_exam.size(); ++i) {
        totalGradesSum += grade_of_exam[i];
    }

    if (totalGradesCount > 0) {
        return double(totalGradesSum / totalGradesCount);
    }
    else {
        return 0.0;
    }
}

void Student::PrintExam() const {
    for (int i = 0; i < grade_of_exam.size(); i++) {
        cout << grade_of_exam[i] << ", ";
    }
}

int Student::GetExamRatesCount(unsigned int index) const {
    return grade_of_exam.at(index);
}

void Student::SetSurname(string surname) {
    this->surname = surname;
}

string Student::GetSurname() const {
    return surname;
}

void Student::SetName(string name) {
    this->name = name;
}

string Student::GetName() const {
    return name;
}

void Student::SetMiddlName(string middlname) {
    this->middlename = middlname;
}

string Student::GetMiddlName() const {
    return middlename;
}

void Student::SetAdress(string adress) {
    this->adress = adress;
}

string Student::GetAdress() const {
    return adress;
}

void Student::SetPhone(string phonenumber) {
    this->phonenumber = phonenumber;
}

string Student::GetPhone() const {
    return phonenumber;
}