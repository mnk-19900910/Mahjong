CPP = g++
TARGET = Main
1: Mahjong.o main.o
	$(CPP) -o $(TARGET) Mahjong.o main.o
Mahjong: Mahjong.cpp
	$(CPP) -o $@ -c $<
main: main.cpp
	$(CPP) -o $@ -c $<

Ex: Mahjong.o mainEx.o MahjongEx.o
	$(CPP) -o $(TARGET) Mahjong.o mainEx.o MahjongEx.o
MahjongEx: MahjongEx.cpp
	$(CPP) -o $@ -c $<
mainEx: mainEx.cpp
	$(CPP) -o $@ -c $<
clean:
	rm -rf $(TARGET) *.o