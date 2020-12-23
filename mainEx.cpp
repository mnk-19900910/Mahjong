#include <iostream>
#include <string>
using namespace std;
#include "header/Mahjong.h"
#include "header/MahjongEx.h"

int main() {
    int number;	// 翻数を表す変数
    cout << "翻数は?" << endl;
    cin >> number;

    string result;	// 満貫、跳満等の結果を表す変数
    // 満貫、跳満等の結果を取得
    result = setResult_func(number);

    string voice;	// メッセージを表す変数
    // 翻数に応じたメッセージを取得
    voice = setVoice_func(number);

    // 新たなインスタンスを設定する
    MahjongEx act (number, result, voice);

    // 翻数と結果、メッセージを表示する
    cout << "翻数は" << act.getNumber() << endl;
    cout << "結果は" << act.getResult() << endl;
    cout << act.getVoice() << endl;

    return 0;
}