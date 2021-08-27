FROM ubuntu:latest

RUN mkdir -p  /home/Reflection-matrix

COPY . /home/Reflection-matrix

CMD  /home/Reflection-matrix/matrix
