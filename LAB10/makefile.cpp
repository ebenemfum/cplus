Line:  readPoints.o readLines.o printLineByCoords.o getStabbedLines.o
	g++ readPoints.o readLines.o printLineByCoords.o getStabbedLines.o

readPoints.o: readPoints.cpp
	g++ -c readPoints.cpp

readLines.o: readLines.cpp
	g++ -c readLines.cpp

printLineByCoords.o: printLineByCoords.cpp
	g++ -c printLineByCoords.cpp

getStabbedLines.o: getStabbedLines.cpp
	g++ -c getStabbedLines.cpp

clean:
	rm*.o Line					