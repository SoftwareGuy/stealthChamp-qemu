#!/bin/bash

echo "You are using an example script to boot a stealth VM."
echo "There is nothing wrong with that, but this script expects you to have"
echo "files located in 'bios' and 'disk' directories in your current working directory."
echo "Most likely QEMU will fail to initialize if you don't. Please open this script and"
echo "read the comments. It's a 300 IQ strat that really works."

# NOTE: The following uses a custom compiled BIOS.
# See SoftwareGuy's repos on GitHub for the actual files.
BIOS_CODE_PATH="$(pwd)/bios/OVMF_CODE.fd"
BIOS_NVRAM_PATH="$(pwd)/bios/nvram.fd"

# Path to your HDD image.
HARD_DISK_PATH="$(pwd)/disk/hdd.img"


exec /opt/stealth-qemu/bin/qemu-system-x86_64 \
	-machine q35 \
	-cpu host,-hypervisor,-rdtscp,-invtsc,kvm-asyncpf-int,hv-relaxed,hv-spinlocks=0x1fff,hv-vendor-id=unknown0000,kvm=off,kvm-hint-dedicated=on,host-cache-info=on,hv-vapic=off,hv-synic=off,hv-stimer=off \
	-smp sockets=1,cores=2,threads=1 \
        -drive file=$BIOS_CODE_PATH,if=pflash,format=raw,unit=0,readonly=on \
        -drive file=$BIOS_NVRAM_PATH,if=pflash,format=raw,unit=1 \
        -drive file=$HARD_DISK_PATH,index=0,media=disk,driver=raw \
        -m 2048 \
        -net nic,model=e1000,macaddr=00:B0:0B:CA:FE:BB \
        -net user \
        -device qemu-xhci,id=xhci \
        --enable-kvm
exit $?

# NOTE: If you need debugging on the default port (1234)
# add -s on the end of the --enable-kvm line.
