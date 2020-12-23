class Mahjong {
    protected:
        int number;	// 翻数を表すメンバ変数
        string result;	// 満貫、跳満等の結果を表すメンバ変数
    public:
        int getNumber();    // 翻数を返すメンバ関数
        string getResult();   // 満貫、跳満等の結果を返すメンバ関数
        void setNumber(int number);   // 翻数を設定するメンバ関数
        Mahjong(int number, string result); // コンストラクタ
};

string setResult_func(int number);// 満貫、跳満等の結果を設定するメンバ関数の実装
