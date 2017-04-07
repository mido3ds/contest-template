#!/usr/bin/env python3.6
''' Contest Template creator.
    Mahmoud Adas, 2017.
'''
import argparse
import os
import os.path as path
import shutil
from datetime import datetime
import subprocess

# static paths
tmpl_path = path.join(path.dirname(path.realpath(__file__)), 'templates')
make_path = path.join(tmpl_path, 'Makefile')
template_path = path.join(tmpl_path, 'template.cpp')
vscode_path = path.join(tmpl_path, '.vscode')


def build_parser():
    parser = argparse.ArgumentParser()

    parser.add_argument('files', nargs='+',
                        default=['a'])
    parser.add_argument('-d', '--dir', nargs='?',
                        default=datetime.now().isoformat(timespec='hours'))
    return parser


def main(args):
    dir_path = path.join(os.getcwd(), args.dir)
    new_make_path = path.join(dir_path, 'Makefile')
    new_vscode_path = path.join(dir_path, '.vscode')

    # create dir if not exists
    if not path.exists(dir_path):
        os.makedirs(dir_path)

    # only copy files if they dont exist
    if not path.exists(new_make_path):
        shutil.copyfile(make_path, new_make_path)

    if not path.exists(new_vscode_path):
        shutil.copytree(vscode_path, new_vscode_path)

    for file in args.files:
        file_path = path.join(dir_path, file + '.cpp')
        if not path.exists(file_path):
            shutil.copyfile(template_path, file_path)

    # open vscode 
    subprocess.call('code {}'.format(dir_path).split())


if __name__ == '__main__':
    args = build_parser().parse_args()
    main(args)
