//
// Created by CMS on 2023-03-14.
//
#include <iostream>
#include "BookInfo.h"
#include "LibManager.h"


BookInfo::BookInfo(int pk, string title, string writer, bool status, string date) {
    this->pk = pk;
    this->title = title;
    this->writer = writer;
    this->status = status;
    this->date = date;
}

const int &BookInfo::GetPrimary() {
    return pk;
}

const string &BookInfo::GetTitle() const {
    return title;
}

const string &BookInfo::GetWriter() const {
    return writer;
}

const bool &BookInfo::Status() const {
    return status;
}

const string &BookInfo::GetDate() const {
    return date;
}

void BookInfo::GetList() const{
    cout << "===== a Library Catalog =====" << endl;
    cout << "Primary Num : " << pk << endl;
    cout << "Book Name : " << title << endl;
    cout << "Writer : " << writer << endl;
    cout << ((status == LibManager::ENABLE) ? "Stat : ENABEL" : "Stat : UNABLE") << endl;
    cout << "Date : " << date << endl;
    cout << "===========================" << endl;
}