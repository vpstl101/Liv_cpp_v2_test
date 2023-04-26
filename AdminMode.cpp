
#include "AdminMode.h"
#include "LoginException.h"

/*AdminMode::AdminMode(CreatArray<Member *> _memArr, int _memNum, int _arrNum, int _listLen)
        : LibManager(_memArr, _memNum, _arrNum, _listLen) {
    memArr=_memArr;
    memNum=_memNum;

}*/

/*
AdminMode::AdminMode(const CreatArray<Member *> *arr, int memNum2)
        :LibManager(arr, memNum2){
}
*/

void AdminMode::MakeMemberShip()
{
    cout<<"a"<<endl;
}


/*

void AdminMode::MakeMemberShip() {

    string id, pw, name, phoneNum;
    //AdminMode *pAmode = new AdminMode();
    cout << "=== Make Membership ===" << endl;
    try {
        cout << "ID : ";
        cin >> id;

        if (id.size() < 3 || id.size() > 5) // 3~5 자리 검사
            throw LogInException(id);

        for (int i = 0; i < memNum; i++) {
            if (memArr[i]->GetID() == id) // 중복 검사
                throw LogInException(id);
        }
    }
    catch (LogInException &ex) {
        ex.IDReport();
        return AdminMode::MakeMemberShip();
    }

    try {
        cout << "PW : ";
        cin >> pw;

        if (pw.size() < 4 || pw.size() > 6) // 4~6 자리 검사
            throw PWException(pw);
    }
    catch (PWException &ex) {
        ex.PWReport();
        return AdminMode::MakeMemberShip();
    }
    cout << "NAME : ";
    cin >> name;
    cout << "Phone NumBer : ";
    cin >> phoneNum;
    cout << "" << endl;

    cout << "++ Member registration completed ++" << endl
         << endl;

    memArr[memNum++] = new Member(id, pw, name, phoneNum);
    //pAmode->MemSndData(memArr, memNum);
}
*/

