#include <iostream>
#include "database.h"
// iostream, string, cstdio(stdio.h) cstdlib(stdlib.h), cstring(string.h) 사용 가능

Entry *create(Type type, std::string key, void *value) {
    Entry *entry;
    entry->type = type;
    entry->key = key;
    entry->value = value;
    return entry;
}

void init(Database &database) {
    // db 멤버 초기화
}

void add(Database &database, Entry *entry) {
    // db 사이즈 늘리기
    // 엔트리 추가   
}

Entry *get(Database &database, std::string &key) {
    Entry *entry;
    // db entry.key = key 인 것에 접근, 출력
    return entry;
}

void remove(Database &database, std::string &key) {
    // db entry.key = key 인 것에 접근, 삭제
    // index 땡기기
}

void destroy(Database &database) {
    // 모든 메모리 할당 해제
}

int main() {
    Database db;
    Entry entry;
    std::string command;
    bool running = true;
    init(db); // db 초기화

    while (running) {
        // 출력
        std::cout << "command (list, add, get, del, exit): ";
        std::cin >> command;
        if (command == "list") {
            // db 출력
        } else if (command == "add") {
            // db entry 추가
            std::cout << "key: ";
            // key 값 받기
            std::cout << "type (int, double, string, array): ";
            // type 받기
            std::cout << "value: ";
            // value 값 받기
            // entry = create(type, key, value);
            // add(db, entry);
        } else if (command == "get") {
            std::cout << "key: ";
            // key 값 받기
            // get(db, key);
            // db 에서 값 가져오기
        } else if (command == "del") {
            std::cout << "key: ";
            // key 값 받기
            // remove(db, key);
            // db 에서 값 삭제하기
        } else if (command == "exit") {
            // db 삭제
            running = false;
        } else {
            throw "error";
        }
    }
    return 0;
}