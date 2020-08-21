'''
Author: PlanC
Date: 2020-08-21 16:18:23
LastEditTime: 2020-08-21 19:48:16
FilePath: \Practical-Training-Neusoft\compile.py
'''

import os
import platform
import sys
import time
from alive_progress import alive_bar

def get_list(dir, filelist):
    newdir = dir
    if os.path.isfile(dir):
        if dir.endswith('.c'):
            filelist.append(os.path.splitext(dir)[0])
        if dir.endswith('.exe') or dir.endswith('.out'):
            os.remove(dir)
            print('\rdeleted ' + dir, end = '')

    if os.path.isdir(dir):
        for s in os.listdir(dir):
            if s == '.git' or s == '.vscode':
                continue
            newdir = os.path.join(dir, s)
            get_list(newdir, filelist)
    return filelist


if __name__ == '__main__':
    list = get_list('.', [])
    os.system('clear || cls')
    print(str(len(list)) + ' files')
    with alive_bar(len(list)) as bar:
        for e in list:
            bar()
            time.sleep(0.1)
            if platform.system() == 'Windows':
                if (len(e.split('\\')) == 3):
                    #print('\tgcc\t' + e + '.c\t-o\t' + e + '.exe', end = '')
                    if os.system('gcc ' + e + '.c -o ' + e + '.exe') != 0:
                        break

            if platform.system() == 'Linux':
                if (len(e.split('/')) == 3):
                    #print('\tgcc\t' + e + '.c\t-o\t' + e + '.out\t-lm')
                    if os.system('gcc ' + e + '.c -o ' + e + '.out -lm') != 0:
                        break
