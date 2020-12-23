#include <iostream>
#include <string>
using namespace std;
#include "header/Mahjong.h"

// 翻数を返すメンバ関数の実装
int Mahjong::getNumber() {
    return this->number;
}

// 満貫、跳満等の結果を返すメンバ関数の実装
string Mahjong::getResult() {
    return this->result;
}

// 満貫、跳満等の結果を設定するメンバ関数の実装
string setResult_func(int number) {
    string result;
    if (number >= 13) {
        return result="数え役満";
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

// 雀士を表すクラスのコンストラクタの実装
Sparrow::Sparrow(string name) {
    this->name = name;
}

// 麻雀格闘倶楽部を表す名前と鳴き声を表示するメンバ関数の実装
void MFC::voice() {
    cout << "麻雀格闘倶楽部の" << this->name << "です。 すごーい" << endl;
}

// 麻雀格闘倶楽部を表すクラスのコンストラクタの実装
MFC::MFC(string name) : Sparrow(name) {
}

// サクラナイツを表す名前と鳴き声を表示するメンバ関数の実装
void Sakura::voice() {
    cout << "サクラナイツの" << this->name << "です。 やったね" << endl;
}

// サクラナイツを表すクラスのコンストラクタの実装
Sakura::Sakura(string name) : Sparrow(name) {
}

// Sparrowクラスのポインタを引数としたsub関数
void sub(Sparrow *p) {
    p->voice();
}
