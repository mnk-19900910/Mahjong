#include <iostream>
#include <string>
using namespace std;
#include "Mahjong.h"

int main() {
    int number;	// 翻数を表す変数
    string result;	// 満貫、跳満等の結果を表す変数
    cout << "翻数は?" << endl;
    cin >> number;

    // 満貫、跳満等の結果を取得
    result = setResult_func(number);

    // 新たな翻数を設定する
    Mahjong act (number, result);

    // 翻数と結果を表示する
    cout << "翻数は" << act.getNumber() << endl;
    cout << "結果は" << act.getResult() << endl;

    return 0;
}