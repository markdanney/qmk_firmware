FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-22.04
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends \
    git python3-pip \
    && python3 -m pip install qmk \
    && export PATH="$HOME/.local/bin:$PATH" \
    && export QMK_HOME='/workspaces/qmk_firmware' \
    && qmk setup markdanney/qmk_firmware -b markdanney -y \
    && qmk config compile.keyboard=crkbd/rev1 compile.keymap=markdanney
