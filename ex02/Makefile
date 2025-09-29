# !--Makefile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=Account.cpp tests.cpp
OBJS=$(SRC:.cpp=.o)
TARGET=account

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

run:
	./$(TARGET)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

.PHONY: all re clean fclean
