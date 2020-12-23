class MahjongEx : public Mahjong {
    protected:
        string voice;	// メッセージを表すメンバ変数
    public:
        string getVoice();	// メッセージを返すメンバ関数
        MahjongEx(int number, string result, string voice); // コンストラクタ
};