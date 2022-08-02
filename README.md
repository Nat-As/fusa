```
  ______ _    _  _____         
 |  ____| |  | |/ ____|  /\    
 | |__  | |  | | (___   /  \   
 |  __| | |  | |\___ \ / /\ \  
 | |    | |__| |____) / ____ \ 
 |_|     \____/|_____/_/    \_\
                               
```
Fusa is a security contingency virus to destroy your files in case they are stolen. From the Japanese word 封鎖 (fusa) which means 'lockdown' or 'blockade' this virus is designed to be disguised as an important pdf or image. When executed, the program will remove every file it can access, and begin writing sudo random data to the disk to prevent data carving attempts. This is a great file to have laying around and to never click on. If someone accesses your computer or thumb drive, they could trigger the fusa virus and remove all of your private data.
# compile
Compile with gcc simply with: ```gcc fusa.c -o fusa``` or download it [here](https://github.com/Nat-As/fusa/releases/download/fusa_v2.1.1/fusa-2.1.1).
# considerations
Be careful where you run it!

# How it works
This file will currently delete everything it can access in it's folder. As an example:
```
.
├── safe
│   └── secrets.txt
└── unsafe
    ├── folder
    │   └── alsowillbedeleted.jpg
    ├── fusa-2.1.1
    └── willbedeleted.jpg

3 directories, 4 files
```
The contents of the unsafe folder in this example will be deleted. The top level folder as well as the safe folder will not be deleted. Only place fusa in a directory that you are okay with deleting.
