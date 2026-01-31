FROM gcc:15.2.0

WORKDIR /usr/src/CPP-Project

COPY src/Driver.cpp src/Header.h ./

RUN g++ -o Test Driver.cpp

CMD ["./Test"]

