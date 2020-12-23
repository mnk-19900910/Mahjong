#include <iostream>
#include <string>
using namespace std;
#include "Mahjong.h"
#include "MahjongEx.h"

// メッセージを返すメンバ関数の実装
string MahjongEx::getVoice() {
    return this->voice;
}

// コンストラクタの実装
MahjongEx::MahjongEx(int number, string result, string voice) : Mahjong(number, result) {
    this->voice = voice;
}