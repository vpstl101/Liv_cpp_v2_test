#include <iostream>
#include "Member.h"
//#include "LoginException.h"

using namespace std;

Member::Member(string id, string pw, string name, string phoneNum) {
    this->id = id;
    this->pw = pw;
    this->name = name;
    this->phoneNum = phoneNum;
}

const string &Member::GetID() const // 5자리 이상
{
    return id;
}

const string &Member::GetPW() const // 8자리 이상 정규식
{
    return pw;
}

const string &Member::GetName() const {
    return name;
}

const string &Member::GetPhoneNum() const {
    return phoneNum;
}

void Member::GetMemList() const{
    cout << "===== a Library Catalog =====" << endl;
    cout << "ID : " << id << endl;
    cout << "PW : " << pw << endl;
    cout << "Name : " << name << endl;
    cout << "Phone Num : " << phoneNum << endl;
    cout << "===========================" << endl;

}