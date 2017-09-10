#!/bin/bash

docker build -t therickys93/testing:ubuntu -f Dockerfile.ubuntu .
docker build -t therickys93/testing:alpine -f Dockerfile.alpine .