//
// Created by CMS on 2023-04-24.
//

#ifndef LIB_CPP_V2_ADMINMODE_H
#define LIB_CPP_V2_ADMINMODE_H

#include "LibManager.h"
#include "Member.h"
#include "CreatArray.h"

class AdminMode : public LibManager {
public:
/*
    CreatArray<Member *> memArr;
    int memNum;
*/

public:
    enum A_MENU {
        EXIT,
        ADD,
        DEL,
        INFO,
        LIST
    };
public:
    AdminMode()
            : LibManager(){};

//    AdminMode(CreatArray<Member *> _memArr, int _memNum, int _arrNum, int _listLen);
    ~AdminMode() {};

    //virtual void MakeMemberShip();
    virtual void MakeMemberShip() override;
};


#endif //LIB_CPP_V2_ADMINMODE_H
