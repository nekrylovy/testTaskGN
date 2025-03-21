FROM ubuntu:latest

RUN apt-get -y update && apt-get install -y

RUN apt-get -y install g++ cmake make

COPY . /usr/src/testTaskGN

WORKDIR /usr/src/testTaskGN/build

RUN cmake ..

RUN make

CMD [ "./AntMovements" ]