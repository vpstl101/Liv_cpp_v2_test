#include <iostream>
#include <functional>


#include "LibManager.h"
//#include "AdminMode.h"
//#include "GeneralMode.h"
#include "Member.h"
#include "LoginException.h"

using namespace std;

/*LibManager::LibManager(CreatArray<Member *> memArr, int memNum, int arrNum, int listLen)
        : memNum(0), arrNum(0), listLen(0) {
    this->memArr = memArr;
}*/


void LibManager::MemberList() {
    memArr[memNum++] = new Member("qwer", "qwer", "qwer", "qwer");
    memArr[memNum++] = new Member("qqqq", "qqqq", "qqqq", "qqqq");
    memArr[memNum++] = new Member("wwww", "wwww", "wwww", "wwww");
}

void LibManager::ShowMemberList() {
    cout << "LIB" << endl;
    for (int i = 0; i < memNum; i++) {
        cout << "====Pk : [" << i << "]====" << endl;
        cout << "ID : " << memArr[i]->GetID() << endl;
        cout << "PW : " << memArr[i]->GetPW() << endl;
        cout << "Name : " << memArr[i]->GetName() << endl;
        cout << "Phone Num : " << memArr[i]->GetPhoneNum() << endl;
        cout << "===========================" << endl;
    }
}






/*void LibManager::BookList() {
    bookArr[arrNum++] = new BookInfo(listLen++, "one", "엮은이", ENABLE, "123");
    bookArr[arrNum++] = new BookInfo(listLen++, "이순신의 바다", "엮은이", ENABLE, "123");
   *//* bookArr[arrNum++] = new BookInfo(listLen++, "3333", "엮은이", UNABLE, "123");
    bookArr[arrNum++] = new BookInfo(listLen++, "four4", "엮은이", UNABLE, "123");
    bookArr[arrNum++] = new BookInfo(listLen++, "four4", "지은이", UNABLE, "333");*//*
}*/
