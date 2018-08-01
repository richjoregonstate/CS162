CXX = g++
SRCS = chara.cpp barb.cpp medu.cpp blueM.cpp hydr.cpp
HEADERS = chara.hpp barb.hpp medu.hpp blueM.hpp hydr.hpp
test: ${SRCS} ${HEADERS}

program1: ${SRCS} ${HEADERS}
	 ${CXX} main.cpp ${SRCS} -o program -g

clean:
	rm -f *.o program


