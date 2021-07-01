project('bsddiff', ['c'], version: '0.99.0', default_options: [
    'c_std=c99', 'warning_level=2', 'buildtype=debugoptimized'
], license: 'BSD-2-Clause')

sysdefs = include_directories('.')

add_global_arguments(['-Dlint', '-D_GNU_SOURCE'], language: ['c'])

subdir('cmp')
subdir('diff')
subdir('diff3')
subdir('sdiff')
