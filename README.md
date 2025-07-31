## Resource where I found how to install GLFW
https://shnoh171.github.io/gpu%20and%20gpu%20programming/2019/08/26/installing-glfw-on-ubuntu.html

## Build Command
```bash
gcc todo.c -o todo -lglfw -lGL -lleif -lclipboard -lm -lxcb
```

## Additional Information

\* Added this package `lxcb` linking because of this error as -lclipboard is depending on this
```
/usr/bin/ld: /usr/local/lib/libclipboard.a(clipboard_x11.c.o): undefined reference to symbol 'xcb_get_setup'
/usr/bin/ld: /lib/x86_64-linux-gnu/libxcb.so.1: error adding symbols: DSO missing from command line
```

\* Which package gave error googled how to install or how to fix <br>
especially updating OpenGL version at this URL: ~~https://stackoverflow.com/questions/19901934/libpthread-so-0-error-adding-symbols-dso-missing-from-command-line~~
https://askubuntu.com/a/1319567/2308596

\* For one of packages `pkg-config` package manageer was needed installed via this command
```bash
sudo apt-get install pkg-config
```

\* Installed `lclibboard` from here: https://github.com/jtanx/libclipboard

\* Installed `cglm` in this way, which is not a direct dependency for this project, but dependency of depdendencies and in general good package in general. Here is the installation guide:
```bash
sudo apt update
sudo apt install build-essential
sudo apt install libcglm-dev
```
Read more about cglm [here](./docs_and_aboout_libs/cglm.md)