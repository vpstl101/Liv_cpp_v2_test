#ifndef LIB_CPP_V2_LIBMANAGER_H
#define LIB_CPP_V2_LIBMANAGER_H

#include "CreatArray.h"

using namespace std;

class LibManager {
public:
    CreatArray<Member *> memArr;
    // BookArray<BookInfo *> bookArr;
    int memNum;
    int arrNum;
    int listLen;
public:
    enum {
        GO_BACK = -1,
        EXIT,
        LOG_IN,
        MAKE_EMBER,
        FIND_MY_INFO,
        WITHDRAWAL,
        G_MODE,
        A_MODE
    };
    enum BORROW {
        UNABLE,
        ENABLE
    };

    LibManager()
            : memNum(0) {};
    //LibManager(const CreatArray<Member*> *arr, int memNum);

//    LibManager(CreatArray<Member *> memArr, int memNum, int arrNum, int listLen);
    //virtual ~LibManager() {};

    //LibManager(){};
    virtual void MemberList();

    virtual void ShowMemberList();

    virtual void MakeMemberShip() = 0;

    //virtual void BookList();
    virtual ~LibManager();

};


#endif //LIB_CPP_V2_LIBMANAGER_H
