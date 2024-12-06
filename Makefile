# Variáveis para facilitar alterações futuras
CXX = g++
CXXFLAGS = -std=c++11 -Wall
COVERAGE_FLAGS = -fprofile-arcs -ftest-coverage
DEBUG_FLAGS = -g
LDFLAGS = 
TARGET = testa_velha
OBJS = velha.o

# Alvo principal
all: $(TARGET)
	./$(TARGET)

# Alvo de compilação principal
$(TARGET): $(OBJS) testa_velha.cpp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(OBJS) testa_velha.cpp -o $(TARGET)

# Compila velha.o
velha.o: velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c velha.cpp

# Alvo para cobertura de código
gcov: clean
	$(CXX) $(CXXFLAGS) $(COVERAGE_FLAGS) -c velha.cpp
	$(CXX) $(CXXFLAGS) $(COVERAGE_FLAGS) $(OBJS) testa_velha.cpp -o $(TARGET)
	./$(TARGET)
	gcov *.cpp

# Alvo para depuração
debug: $(OBJS) testa_velha.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG_FLAGS) $(OBJS) testa_velha.cpp -o $(TARGET)
	gdb $(TARGET)

# Verifica código com cpplint
cpplint:
	cpplint --exclude=catch.hpp *.*

# Verifica código com cppcheck
cppcheck:
	cppcheck --enable=warning .

# Teste com valgrind
valgrind: $(TARGET)
	valgrind --leak-check=yes --log-file=valgrind.rpt $(TARGET)

# Limpa arquivos gerados
clean:
	rm -rf *.o *.exe *.gc* $(TARGET)
