# !--Makefile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRCS=main.cpp contact.cpp phonebook.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=phonebook

all: $(TARGET)

phonebook: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

run:
	./$(TARGET)

fclean: clean
	rm -f $(TARGET)

clean:
	rm -f $(OBJS)

.PHONY: all re fclean clean
