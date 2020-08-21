'''
Author: PlanC
Date: 2020-08-21 16:18:23
LastEditTime: 2020-08-21 19:20:48
FilePath: \Practical-Training-Neusoft\compile.py
'''

import os
import platform
import sys
import time

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
    count = 0
    list = get_list('.', [])
    os.system('clear || cls')
    print(str(len(list)) + ' files')
    for e in list:
        count = count + 1
        print('progress: ' + str(len(list)) + ' / ' + str(count), end = '')
        if platform.system() == 'Windows':
            if (len(e.split('\\')) == 3):
                print('\tgcc\t' + e + '.c\t-o\t' + e + '.exe')
                if os.system('gcc ' + e + '.c -o ' + e + '.exe') != 0:
                    break

        if platform.system() == 'Linux':
            if (len(e.split('/')) == 3):
                print('\tgcc\t' + e + '.c\t-o\t' + e + '.out\t-lm')
                if os.system('gcc ' + e + '.c -o ' + e + '.out -lm') != 0:
                    break
