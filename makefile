CC = g++
FLAGS = -Wall -c
TARGET= app
$(TARGET) : mainapp.o item.o itemmanager.o
	$(CC) mainapp.o item.o itemmanager.o -o $(TARGET)
mainapp.o : mainapp.cpp
	$(CC) $(FLAGS) mainapp.cpp
item.o : item.cpp
	$(CC) $(FLAGS) item.cpp
itemmanager.o : itemmanager.cpp
	$(CC) $(FLAGS) itemmanager.cpp
#Phony Target
clean:
	rm -f *.o
	rm -f $(TARGET)
