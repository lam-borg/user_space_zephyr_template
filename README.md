# user_space_zephyr_template
A template for c++ processes living in zephyr userspace
## setup
### Clone destination

clone this repo into a folder, which will be the root of the project. west will clone the zephyr folder and other modules into this folder.
if you dont want west to clutter your workspace, spend a subfolder for your project
```text
my-app/ <-**create this folder in your workspace and execute the clone from here**
├─ user_space_zephyr_template  <- **rename this folder to application or whatever fits you best**
├─ zephyr/
├─ modules/
│  ├─ hal_xy
│  ├─ mbedtls
├─ other
```
### start with venv
its good practice to start with a venv when handling python in a specific context. by using a venv your system python will not be affected by tools you install for zephyr and other app specific tools
```bash
python3 -m venv .venv #ubuntu will tell you what dependencies you have to install before it works      
```
### get west
activate your venv
```
source .venv/bin/activate
pip install west
```

### initialize your zepyhr app


