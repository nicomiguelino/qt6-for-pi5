FROM --platform=linux/arm64/v8 balenalib/raspberrypi5-debian:bookworm

RUN apt-get -y update && apt-get -y upgrade

RUN apt-get install -y --no-install-recommends \
    build-essential \
    qt6-base-dev

WORKDIR /app

RUN mkdir build/
