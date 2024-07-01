# Developing and Running Qt 6 Applications on Raspberry Pi 5 (Lite)

## Getting Started

### Environment

* Raspberry Pi 5
* Raspberry Pi OS Lite (Bookworm, 64-bit)

### Building and Running without using Docker

#### Dependencies

```bash
sudo apt-get -y update && sudo apt-get -y upgrade
sudo apt-get install -y qt6-base-dev
```

#### Building

```bash
mkdir build && cd build/
qmake6 ..
make
```

#### Running

```bash
export QT_QPA_PLATFORM=eglfs
```

### Building and Running using Docker

At the moment, you can only build the application from the Raspberry Pi 5. Support for
building from a non-Pi machine (e.g., x86_64) will be added in the future.

##### Commands

Build and start the container.

```bash
docker compose up -d --build
```

#### Building

Access the container using `bash`.

``bash
docker compose exec viewer bash
```

Run the following commands to build the application.

```bash
cd build/
qmake6 ..
make
```

#### Running

```bash
./main
```
