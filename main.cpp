#include <iostream>
#include "LibManager.h"
#include "AdminMode.h"
//#include "GeneralMode.h"
// g++ -c 123.cpp
// g++ -o "name" main.cpp 123.o
using namespace std;

int main() {

    LibManager *ad = new AdminMode();

    //dminMode *ad2 = new LibManager();
   // LibManager *lib;


    //LibManager *pManager, manager;
    //pManager=&manager;
    AdminMode *pAmode, Amode;
    pAmode=&Amode;

    //pManager=&Amode;

    //LibManager *pAmode2 = new AdminMode();
    //GeneralMode *pGmode, Gmode;
   // pGmode=&Gmode;


    pAmode->MemberList();

    int choice;

    while (1) {
        //manager.PrintMenu();
        cout << "CHOICE : ";
        cin >> choice;
        cout << "" << endl;

        switch (choice) {
            case LibManager::LOG_IN:        // 로그인
                //choice = manager.Login();
                break;
            case 2:    // 회원가입
                pAmode->MakeMemberShip();
                break;
            case 3:  // 내정보 찾기
                pAmode->ShowMemberList();
                break;
                /* case LibManager::WITHDRAWAL:    // 회원 탈퇴
                              manager.MemberDel();
                              break;
                          case LibManager::GO_BACK:       // 뒤로가기
                              choice = manager.PrintMenuCopy();
                              break;
                          case LibManager::G_MODE:
                              pGmode->GernerAP();
                              break;
                          case LibManager::A_MODE:
                              pAmode->AdminAP();
                              break;
                              */
            case LibManager::EXIT:          // 나가기
                return 0;
            default:
                break;
        }
    }
    return 0;
}
