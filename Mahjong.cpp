#include <iostream>
#include <string>
using namespace std;
#include "Mahjong.h"

// 翻数を返すメンバ関数の実装
int Mahjong::getNumber() {
    return this->number;
}

// 満貫、跳満等の結果を返すメンバ関数の実装
string Mahjong::getResult() {
    return this->result;
}

// 満貫、跳満等の結果を設定するメンバ関数の実装
string setResult_func(int number){
    string result;
    if (number >= 13) {
        return result="役満";
    } else if (number >= 11) {
        return result="三倍満";
    } else if (number >= 8) {
        return result="倍満";
    } else if (number >= 6) {
        return result="跳満";
    } else if (number >= 4) {
        return result="満貫";
    } else {
        return result="---";
    }
}

// コンストラクタの実装
Mahjong::Mahjong(int number, string result) {
    this->number = number;
    this->result = result;
}
