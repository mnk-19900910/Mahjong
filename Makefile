CPP = g++
TARGET = Main
ALL: Mahjong.o main.o
	$(CPP) -o $(TARGET) Mahjong.o main.o
Mahjong: Mahjong.cpp
	$(CPP) -o $@ -c $<
main: main.cpp
	$(CPP) -o $@ -c $<
clean:
	rm -rf $(TARGET) *.o