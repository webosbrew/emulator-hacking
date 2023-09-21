# Rooting Guide for LG webOS Emulator

This guide is for the emulator, **NOT for the real TV.**
To root a real webOS TV, see [crashd method](https://gist.github.com/throwaway96/e811b0f7cc2a705a5a476a8dfa45e09f) 
or [rootmy.tv](https://rootmy.tv) instead.

## Prerequisites

- [VirtualBox](https://www.virtualbox.org/wiki/Downloads)
- [Emulator Image](https://webostv.developer.lge.com/develop/tools/emulator-installation) ([Archive](https://archive.org/details/lg-webos-tv-emulator))
- Linux x86 LiveCD (Something like [GParted](https://gparted.org/) is good enough)
- OpenSSH Client

## Rooting

### For webOS Emulator 1.2.0

Vulnerbility used: `/home/root/mount-encrypted.sh` can be used to execute arbitrary commands as root.

### For webOS Emulator 2.0.0

Vulnerability used: `/dev/hda4` is mounted without `nosuid` option. It will be mounted on `/media/developer/`.

### For webOS Emulator 3.0.0

Vulnerability used: `/dev/hda4` is mounted without `nosuid` option. It will be mounted on `/mnt/lg/appstore/`.

### For webOS Emulator 4.0.0

Vulnerbility used: `/dev/hda2` is mounted without `nosuid` option. It will be mounted on `/`.