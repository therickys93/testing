#!/bin/bash

docker build -t testing:ubuntu -f Dockerfile.ubuntu .
docker build -t testing:alpine -f Dockerfile.alpine .