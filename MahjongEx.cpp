#include <iostream>
#include <string>
using namespace std;
#include "header/Mahjong.h"
#include "header/MahjongEx.h"

// メッセージを返すメンバ関数の実装
string MahjongEx::getVoice() {
    return this->voice;
}

string setVoice_func(int number) {
    string voice;
    if (number >= 13) {
        return voice="最高ぉ！";
    } else if (number >= 11) {
        return voice="えぇー";
    } else if (number >= 8) {
        return voice="おみごと！";
    } else if (number >= 6) {
        return voice="すごーい";
    } else if (number >= 4) {
        return voice="やったねー";
    } else {
        return voice="良かったねー";
    }
}

// コンストラクタの実装
MahjongEx::MahjongEx(int number, string result, string voice) : Mahjong(number, result) {
    this->voice = voice;
}