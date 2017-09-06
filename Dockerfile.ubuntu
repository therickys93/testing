FROM ubuntu
RUN apt-get update && apt-get install git make build-essential -y
RUN git clone https://therickys93@bitbucket.org/therickys93/testing.git && \
    cd testing && make && make install