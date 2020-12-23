#include <iostream>
#include <string>
using namespace std;
#include "header/Mahjong.h"

int main() {
    int number;	// 翻数を表す変数
    cout << "翻数は?" << endl;
    cin >> number;

    string result;	// 満貫、跳満等の結果を表す変数
    // 満貫、跳満等の結果を取得
    result = setResult_func(number);

    int like;	// 好きな雀士を表す変数
    cout << "好きなのは? 1：高宮まり 2:岡田紗佳" << endl;
    cin >> like;

    // 新たな翻数と結果を表示するインスタンスを設定する
    Mahjong act (number, result);

    // 翻数と結果、ボイスを表示する
    cout << "翻数は" << act.getNumber() << endl;
    cout << "結果は" << act.getResult() << endl;

    // 雀士のインスタンスを作成し、ボイスを表示する
    if (like == 1) {
        MFC mf ("高宮まり");
        sub(&mf);
    } else {
        Sakura sa ("岡田紗佳");
        sub(&sa);
    }

    return 0;
}