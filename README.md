# StealthChamp QEMU: Stealthy Virtual Machines

## What is this?

This repository contains a git snapshot version of QEMU with KVM stealth patches applied to fool programs that look for signs of VirtualBox, Virtual PC, Bochs, QEMU/KVM and VMWare.

By using this QEMU, you can play games that would either penalize you for playing under a VM (BattlEye in Rainbow Six Siege) or flat-out refuse to run (Genshin Impact).

## Precautions

- **Under no circumstances** should you run this stealth-patched version of QEMU as a daily driver. The code is from the official Git repository and could be in whatever state. While I have 
successfully booted a Windows 10 (1609) virtual machine and it works for me, it may not work as intended for you. You've been warned.
- This version of QEMU is also great for debugging anti-tamper/anti-VM mechanisms in software or analysing suspicious software that are hostile to VM environments.
- Do **not** simply run `make install` once you've built QEMU! You will most likely overwrite your virgin QEMU that was supplied either by compiling an official QEMU release or using a
package supplied by your distro repositories. I'd honestly recommend copying the built binary to the folder you have your work directory prepared in and run it from there.

## Compiling and Installation

Compiling and installation was done on Linux Mint 20.1 which is based on Ubuntu.

1. Clone this repository to your computer.
2. Update your distro package repositories and install dependencies for QEMU. Debian/Ubuntu can use `sudo apt-get update && sudo apt-get build-dep qemu`.
3. Run the configure script, like so: `./configure --target-list=x86_64-softmmu --audio-drv-list=alsa,pa --prefix=/opt/stealth-qemu`. This will install the stealth QEMU into `/opt/stealth-qemu`. Change if desired.
4. If step 3 fails or something goes wrong, check to ensure you have enough disk space, you're up to date and build dependencies have been met.
5. Run `make` and then `make install`. This will install QEMU into `/opt/stealth-qemu` or if you changed the path, wherever you want it.
6. Run `/opt/stealth-qemu/bin/qemu-system-x86_64 --version` and you should get something like `QEMU Version 5.2.50`. If you do, congrats! You've got yourself a stealthy QEMU build.

## Getting the custom BIOS blobs

The last part of the puzzle is getting the firmware that spoofs stuff so it's completely not QEMU/Bochs.

To save you time, blood, sweat and tears, look at my repositories for **stealthChamp-firmware**. Download the files in that repository and use them in conjuction with the script (details below).

If you don't trust me then you can compile EDK2 yourself but that took a while to complete so pick your poison.

## Running QEMU

See the included shell script to boot a QEMU instance with stealth mode enabled.

I highly recommend not running the script in this work directory, though. It will get very messy. Copy it to a fresh work directory in your home folder.

For example, your work directory could be like:

```
/home/tenryuu:
- Desktop
- Documents
- Development
-- stealthChamp-qemu
--- (source repo)
-- qemu-stealth-work
--- Boot-Stealth-VM.sh
--- bios
---- OVMF_CODE.fd
---- OVMF_VARS.fd
---- nvram.fd
--- disk
---- hdd.img
- Pictures
(...)
```

## Performance Hits Inbound

This version of QEMU requires you to disable specific CPU instructions in order to boot your OS. This will encur performance penalities since the emulator will no longer expose those
virtual machine CPU instructions and the OS may fail to boot correctly. I would not use this for extensive gaming, but for reverse engineering and various other uses it's good enough.

## Credits

Again, I take no credit for what CB/DonnerPartyOf1 did. I merely patched QEMU manually and tested it out, which worked nicely. Original QEMU patch is available here: https://gitlab.com/DonnerPartyOf1/kvm-hidden.

Enjoy.
