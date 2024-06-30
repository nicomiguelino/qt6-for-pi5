# Developing and Running Qt 6 Applications on Raspberry Pi 5 (Lite)

## Getting Started

### Environment

* Raspberry Pi 5
* Raspberry Pi OS Lite (Bookworm, 64-bit)

### Dependencies

```bash
sudo apt-get -y update && sudo apt-get -y upgrade
sudo apt-get install -y qt6-base-dev
```

### Building

```bash
mkdir build && cd build/
qmake6 ..
make
```

### Running

```bash
export QT_QPA_PLATFORM=eglfs
```
