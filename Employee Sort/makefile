proFile: fireOne.o sortEmployeesId.o fireAll.o countEmployees.o lookOnFullName.o lookOnId.o printOne.o printAll.o recruitEmployee.o mainA3.o helperA3.o
	gcc -Wall -std=c99 fireOne.o sortEmployeesId.o fireAll.o countEmployees.o lookOnFullName.o lookOnId.o printOne.o printAll.o recruitEmployee.o mainA3.o helperA3.o -o bin/proFile
fireOne.o:src/fireOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/fireOne.c
sortEmployeesId.o: src/sortEmployeesId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/sortEmployeesId.c
fireAll.o: src/fireAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/fireAll.c
countEmployees.o: src/countEmployees.c include/headerA3.h
	gcc -Wall -std=c99 -c src/countEmployees.c
lookOnFullName.o: src/lookOnFullName.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookOnFullName.c
lookOnId.o: src/lookOnId.c include/headerA3.h
	gcc -Wall -std=c99 -c src/lookOnId.c
printOne.o: src/printOne.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printOne.c
printAll.o: src/printAll.c include/headerA3.h
	gcc -Wall -std=c99 -c src/printAll.c
recruitEmployee.o: src/recruitEmployee.c include/headerA3.h
	gcc -Wall -std=c99 -c src/recruitEmployee.c
mainA3.o: src/mainA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/mainA3.c
helperA3.o: src/helperA3.c include/headerA3.h
	gcc -Wall -std=c99 -c src/helperA3.c
clean:
	rm *.o bin/proFile
